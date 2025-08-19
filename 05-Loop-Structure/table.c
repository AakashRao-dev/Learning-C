#include <stdio.h>

int main() {
  int num;
  printf("Welcome to printing tables.\n");
  printf("Please enter the number: ");
  scanf("%d", &num);

  for (int i = 1; i <= 10; i++) {
    printf("%d x %d = %d\n", num, i, num * i);

    if (num * i == 25) {
      break;
    }
  }

  return 0;
}