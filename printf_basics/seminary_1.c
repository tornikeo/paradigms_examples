#include <stdio.h>

int main() {
  for (char i = -126; i < 127; i++){
    printf("%c, ", i);
    if (i % 10 == 0) {
      printf("\n");
    }
  }
}