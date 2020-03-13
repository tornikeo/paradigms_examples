#include <stdio.h>

int main() {
  // \n is for newline character same as hitting "Enter"
  int num_chars = printf("Hello, world!\n");

  //man printf DOES NOT WORK!
  //int printf(const char *format, ...);

  printf("Number of characters printed is %i \n", num_chars);

  // Other formats
  printf("Pi is approximately %.2f. \n", 3.14);
  printf("And I am %s \n", "happy");
  printf("Press %c to pay respects!\n", 'F');
  printf("%i + %i = %c \n", 1, 1, '2');
  return 0;
}