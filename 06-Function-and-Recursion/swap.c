#include <stdio.h>

void swap(int a, int b) {
  int temp = a;
  a = b;
  b = temp;

  printf("Inside Swap - a: %d, b: %d\n", a, b);
}

int main() {
  int x = 4, y = 7;

  printf("Before Swap - x: %d, y: %d\n", x, y);
  swap(x, y);
  printf("After Swap - x: %d, y: %d\n", x, y);

  return 0;
}

