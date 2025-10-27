#include <stdio.h>

int main() {
  int marks[10];
  int no_of_students = 10;

  for (int i = 0; i < no_of_students; i++) {
    printf("Enter the marks for student %d: ", i + 1);
    scanf(" %d", &marks[i]);
  }

  for (int i = 0; i < no_of_students; i++) {
    printf("\nMarks for Student %d is: %d", i + 1, marks[i]);
  }

  return 0;
}