#include <stdio.h>

int main() {
  int roll_no[5] = {1, 2, 3, 4, 5};
  char names[5][20] = {"Flins", "Aino", "Yelan", "Barbara", "Ineffa"};
  float marks[5] = {44.5, 78.9, 90, 95.5, 99.9};

  for (int i = 0; i < 5; i++) {
    printf("\nStudent name: %s, Roll no: %d, Marks: %.2f", names[i], roll_no[i], marks[i]);
  }

  return 0;
}