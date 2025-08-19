#include <stdio.h>

int main() {
  int age;
  char is_indian;

  printf("Welcome to ARTO.\nPlease enter your age: ");
  scanf("%d", &age);

  printf("Are you an Indian Citizen (y/n): ");
  scanf(" %c", &is_indian);

  if (age >= 18 && is_indian == 'y' && age < 70) {
    printf("You are eligible for dirving license :)");
  } else {
    printf("You are not eligible");
  }

  // printf("Your age is %d", age);

  return 0;
}