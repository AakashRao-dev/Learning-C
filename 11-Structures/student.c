#include <stdio.h>

struct Student {
  int roll_no;
  char name[20];
  float marks;
};

int main() {
  struct Student student1;
  printf("Please enter Student details: \n");

  printf("Enter the Roll no: ");
  scanf(" %d", &student1.roll_no);

  printf("Enter the Name: ");
  scanf(" %[^\n]", student1.name);

  printf("Enter the Marks: ");
  scanf(" %f", &student1.marks);

  printf("Here are Student details: \n");
  printf("Roll no: %d, Name: %s, Marks: %.2f", student1.roll_no, student1.name, student1.marks);

  return 0;
}