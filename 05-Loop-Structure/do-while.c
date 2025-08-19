#include <stdio.h>

int main() {
  int i = 0;

  do {
    printf("Please enter a number: ");
    scanf("%d", &i);
  } while (i != 10);

  return 0;
}