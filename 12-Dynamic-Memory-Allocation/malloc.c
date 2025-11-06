#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  printf("Enter the number of elements: ");
  scanf(" %d", &n);

  int *arr = (int*)malloc(n * sizeof(int)); // casting of void to int
  if (arr == NULL) {
    printf("Not enough memory");
    return 1;
  }

  for (int i = 0; i < n; i++) {
    printf("%d\n", arr[i]);
  }

  for(int i = 0; i < n; i++) {
    printf("Enter element no-%d: ", i + 1);
    scanf("%d", &arr[i]);
  }

  long sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }

  printf("The sum of all elements is: %ld", sum);

  return 0;
}