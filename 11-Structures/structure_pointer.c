#include <stdio.h>

struct Student {
  int roll_no;
  char name[10];
  float marks;
};

int main() {
  struct Student s1 = {1, "Shyam", 90.2};
  struct Student *student_ptr = &s1;

  printf("The address of structure student is: %p", student_ptr);

  return 0;
}