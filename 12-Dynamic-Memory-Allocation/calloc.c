#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  printf("Please enter the no of elements: ");
  scanf(" %d", &n);

  int *arr = (int*)calloc(n, sizeof(int));
  if (arr == NULL) {
    printf("Not enough memory");
    return 1;
  }

  for (int i = 0; i < n; i++) {
    printf("%d\n", arr[i]);
  }

  for(int i = 0; i < n; i++) {
    printf("Enter element no-%d: ", i+1);
    scanf("%d", &arr[i]);
  }

  long sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }

  printf("The sum of all numbers is: %ld", sum);

  return 0;
}