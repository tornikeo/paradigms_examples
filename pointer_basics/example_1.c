#include <stdio.h>
#include <stdlib.h>

struct point_t {
  int x;
  int y;
};

struct point3D_t {
  int x;
  int y;
  int z;
};

int main() {
  //Describe the memory state.
  struct point_t my_point = {0, 1};
  printf("point is : %i, %i \n", my_point.x, my_point.y);

  //Pointers to structs
  //example point3d_t
  struct point3D_t my_point3d = {1, 2, 3};
  //lets make pointers!
  struct point3D_t * ptr_3d = &my_point3d;
  struct point_t * ptr = &my_point;

  //Some weird and BAD things to do!
  char * ch_ptr = (char *) ptr_3d;
  printf("%i, %i, %i, %i,\n", ch_ptr[0], ch_ptr[1], ch_ptr[2], ch_ptr[3]);
  //prints (1, 0, 0, 0)
  //This system is little-endian

  struct point_t * point = (struct point_t *) &my_point3d;
  printf("%i, %i, \n", point->x, (*(point)).y ); //both are same

  struct point3D_t * bad_point = (struct point3d_t *) &my_point;
  printf("%i, %i, %i, \n", bad_point->x, bad_point->y, bad_point->z); //bad_point->z is not defined!
  
  //Pointer arithmetics!
  printf("before, after : %i, %i \n", (int)&my_point, (int)((&my_point) + 1))

  return 0;
}