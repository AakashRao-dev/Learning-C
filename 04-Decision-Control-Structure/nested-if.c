#include <stdio.h>

int main() {
  int age;
  char is_indian;

  printf("Welcome to ARTO.\nPlease enter your age: ");
  scanf("%d", &age);

  printf("Are you an Indian Citizen (y/n): ");
  scanf(" %c", &is_indian);

  if (is_indian == 'y') {
    if (age < 18) {
      printf("Wait until you turn 18!");
    } else if (age > 70) {
      printf("You are senior, you cannot apply anymore!");
    } else {
      printf("You are eligible for driving license :) \n");
    }
  } else {
      printf("Only Indian Citizens can apply!");
  }

  // printf("Your age is %d", age);

  return 0;
}