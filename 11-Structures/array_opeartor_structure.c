#include <stdio.h>

struct Student {
  int roll_no;
  char name[10];
  float marks;
};

int main() {
  int a = 5;
  int *ptr = &a;

  struct Student s1 = {34, "Aakash", 57};
  struct Student *stu_ptr = &s1;

  printf("Name: %s, Roll no: %d, Marks: %.2f\n", s1.name, s1.roll_no, s1.marks);
  printf("Name: %s, Roll no: %d, Marks: %.2f\n", (*stu_ptr).name, (*stu_ptr).roll_no, (*stu_ptr).marks);
  printf("Name: %s, Roll no: %d, Marks: %.2f\n", stu_ptr->name, stu_ptr->roll_no, stu_ptr->marks);

  return 0;
}