#include <stdio.h>

// struct Student {
//   int roll_no;
//   char name[10];
//   float marks;
// };

typedef struct {
  int roll_no;
  char name[10];
  float marks;
} Student;

int main() {
  typedef int myInt;
  myInt i = 5;

  printf("Integer value with typedef: %d", i);
  Student s1 = {34, "Aakash", 62};

  return 0;
}