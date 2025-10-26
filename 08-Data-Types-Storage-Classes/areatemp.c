#include <stdio.h>

// Program to showcase practical application of signed and unsigned data values

int main() {
  unsigned int length = 10;
  unsigned int width = 5;
  unsigned int area;

  int temperature = -15;

  // Calculate the area of the rectange
  area = length * width;

  printf("The area of the rectange is: %u square units\n", area);
  printf("The current temperature is: %d degree celsius\n", temperature);

  return 0;
}