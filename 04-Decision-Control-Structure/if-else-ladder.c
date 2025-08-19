#include <stdio.h>

int main() {
  int age;
  printf("Welcome to ARTO.\nPlease enter your age: ");
  scanf("%d", &age);

  if (age < 18) {
    printf("Wait until you turn 18!");
  } else if (age > 70) {
    printf("You are senior, you cannot apply anymore!");
  } else {
    printf("You are eligible for driving license :) \n");
  }

  // printf("Your age is %d", age);

  return 0;
}