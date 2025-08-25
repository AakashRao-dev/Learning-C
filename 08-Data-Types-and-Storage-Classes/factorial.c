#include <stdio.h>

unsigned long long factorial(int num) {
  unsigned long long result = 1;
  for (int i = 2; i <= num; i++) {
    result *= i;
  }
  return result;
}

int main() {
  printf("Factorial of 4: %llu\n", factorial(4));
  printf("Factorial of 5: %llu\n", factorial(5));
  printf("Factorial of 10: %llu\n", factorial(10));
  printf("Factorial of 10: %llu\n", factorial(15));
  printf("Factorial of 20: %llu\n", factorial(20));
  printf("Factorial of 25: %llu\n", factorial(25));

  return 0;
}


