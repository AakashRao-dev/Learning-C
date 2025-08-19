#include <stdio.h>

int main() {
  int age;
  printf("Welcome to ARTO.\nPlease enter your age: ");
  scanf("%d", &age);

  if (age >= 18) {
    printf("You are eligible for having a driving license!\n");
  }


  // falsy values - 0 and NULL
  if (NULL) {
    printf("This is never going to be printed");
  }

  printf("Your age is: %d", age);


  return 0;
}