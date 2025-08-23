#include <stdio.h>

void swap(int*, int*);

int main() {
  int x = 4;
  int y = 87;
  printf("Values before swap x = %d and y = %d\n", x, y);
  swap(&x, &y);
  printf("Values before swap x = %d and y = %d\n", x, y);
  return 0;
}

void swap(int *ptr1, int *ptr2) {
  printf("Values before swap ptr1 = %d and ptr2 = %d\n", *ptr1, *ptr2);
  int temp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = temp;
  printf("Values after swap ptr1 = %d and ptr2 = %d\n", *ptr1, *ptr2);
}