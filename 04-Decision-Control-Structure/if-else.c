#include <stdio.h>

int main() {
  int age;
  printf("Welcome to ARTO.\nPlease enter your age: ");
  scanf("%d", &age);

  if (age >= 18) {
    printf("You are eligible for driving license :) \n");
  } else {
    printf("Wait until you turn 18!");
  }

  // printf("Your age is %d", age);

  return 0;
}