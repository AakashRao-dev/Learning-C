#include <stdio.h>
#include <stdlib.h>

int main() {
  int *arr = (int*)calloc(2, sizeof(int));
  if (arr == NULL) {
    printf("Memory allocation failed\n");
    return 1;
  }
  printf("The address of arr: %p\n", arr);
  arr[0] = 45;
  arr[1] = 74;

  arr = (int*)realloc(arr, 3 * sizeof(int));
  if (arr == NULL) {
    printf("Memory allocation failed\n");
    return 1;
  }
  printf("New address of arr: %p\n", arr);
  printf("Original Elements are: %d %d\n", arr[0], arr[1]);

  arr[2] = 98;
  printf("The value of third element is: %d\n", arr[2]);

  return 0;
}