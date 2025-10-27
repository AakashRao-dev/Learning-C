#include <stdio.h>

int main() {
  int marks[5][6];

  for (int row = 0; row < 5; row++) {
    for (int col = 0; col < 6; col++) {
      printf("Enter the marks for Student-%d Subject-%d: ", row + 1, col + 1);
      scanf("%d", &marks[row][col]);
    }
    printf("\n");
  }

  // int student1[6];
  // int student2[6];
  // int student3[6];
  // int student4[6];
  // int student5[6];

  // int subject1[5];
  // int subject2[5];
  // int subject3[5];
  // int subject4[5];
  // int subject5[5];
  // int subject6[5];

  return 0;
}