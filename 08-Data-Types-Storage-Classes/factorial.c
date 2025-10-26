#include <stdio.h>

unsigned long long factorial(int num) {
  unsigned long long result = 1;
  for (int i = 1; i <= num; i++) {
    result *= i;
  }
  return result;
}

int main() {
  printf("\nFactorial of 4: %llu", factorial(4));
  printf("\nFactorial of 5: %llu", factorial(5));
  printf("\nFactorial of 10: %llu", factorial(10));
  printf("\nFactorial of 15: %llu", factorial(15));
  printf("\nFactorial of 20: %llu", factorial(20));
  printf("\nFactorial of 25: %llu (overflow likely)", factorial(25));
  return 0;
}
