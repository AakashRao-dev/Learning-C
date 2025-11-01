#include <stdio.h>

struct Student {
  int roll_no;
  char name[10];
  float marks;
};

int main() {
  // Direct Initialization
  struct Student s1 = {34, "Aakash", 67};
  printf("\nRoll no: %d, Name: %s, Marks: %.2f", s1.roll_no, s1.name, s1.marks);

  // Designated Initialization
  struct Student s2 = {.name = "Ram", .marks = 71.12, .roll_no = 2};
  printf("\nRoll no: %d, Name: %s, Marks: %.2f", s2.roll_no, s2.name, s2.marks);

  // Zero Initialization
  struct Student s3 = {0};
  printf("\nRoll no: %d, Name: %s, Marks: %.2f", s3.roll_no, s3.name, s3.marks);

  // Copy Initialization
  struct Student s4 = s1;
  s4.roll_no = 120;
  printf("\nRoll no: %d, Name: %s, Marks: %.2f", s4.roll_no, s4.name, s4.marks);

  return 0;
}