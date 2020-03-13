#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmpFn(const void * to_search, const void * array_item) {
  char * str_1 = (char *) to_search;
  char * str_2 = *(char **) array_item;
  printf("%s, %s \n", str_1, str_2);
  return strcmp(str_1, str_2);
}

int main() {
  char * arr[] = {"a", "b", "c", "e", "g", "w", "x"};
  char ** arr_same = &arr;
  char * to_find = "g";
  int number_of_items = 7;
  int item_size = sizeof(char *);
  
  char * result = *(char **) bsearch(to_find, arr_same, number_of_items, item_size, cmpFn);

  if (result != NULL)
    printf("Result is: %s\n", result);
  else 
    printf("result is NULL\n");
  return 0;
}