#include <stdio.h>

// Function Prototype
int sum(int, int);
// Specifies function name, return type, parameters without BODY
// Purpose: Enables type checking and forward declaration of functions
// Placement: often at the start of the C file or in the header file

int main() {
  int add = sum(4, 5);
  printf("The addition is: %d", add);

  int x = 21;
  int y = 57;
  int z = sum(x, y); // call by value (passing the copy of x & y)
  printf("\nThe addition is: %d", z);

  return 0;
}

int sum(int first, int second) {
  int addition = first + second;
  return addition;
}
