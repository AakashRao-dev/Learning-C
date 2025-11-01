#include <stdio.h>

struct Student {
  int roll_no;
  char name[10];
  float marks;
};

// Call by value
void print_student(struct Student student);

// Call by reference
void print_student_from_pointer(struct Student *student);

int main() {
  struct Student s1 = {34, "Aakash", 57};
  struct Student *stu_ptr = &s1;

  print_student(s1);
  // print_student(*stu_ptr);
  print_student_from_pointer(stu_ptr);

  return 0;
}

void print_student(struct Student student) {
  student.roll_no = 5;
  printf("Student Name: %s, Roll no: %d, Marks: %.2f\n", student.name, student.roll_no, student.marks);
}

void print_student_from_pointer(struct Student *ptr) {
  ptr -> roll_no = 120;
  printf("Student Name: %s, Roll no: %d, Marks: %.2f\n", ptr->name, ptr->roll_no, ptr->marks);
}