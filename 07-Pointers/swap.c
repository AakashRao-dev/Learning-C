#include <stdio.h>

void swap(int*, int*);

int main() {
  int x = 4;
  int y = 7;
  printf("Before swap: Value of x = %d and Value of y = %d", x, y);
  swap(&x, &y);
  printf("\nAfter swap: Value of x = %d and Value of y = %d", x, y);

  return 0;
}

void swap(int *ptr1, int *ptr2) {
  printf("\nBefore swap: Value of ptr1 = %d and Value of ptr2 = %d", *ptr1, *ptr2);
  int temp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = temp;
  printf("\nAfter swap: Value of ptr1 = %d and Value of ptr2 = %d", *ptr1, *ptr2);
}