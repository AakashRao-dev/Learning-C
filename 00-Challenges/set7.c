#include <stdio.h>
#include <limits.h>

long kilo_to_miles(long);
unsigned long long factorial_20_ll();
unsigned long factorial_20();

int main() {
  // ************** 1. KILO TO MILES USING LONG **************
  printf("The conversion of Kilo to Miles: %ld\n", kilo_to_miles(3492));

  // ************** 2. FACTORIAL OF 20 USING LONG & LONG LONG **************
  printf("The value of Factorial using only long: %llu\n", factorial_20());
  printf("The value of Factorial using long long: %llu\n", factorial_20_ll());

  // ************** 3. CHECKING INT TO MAXIMUM VALUE **************
  unsigned int positive = UINT_MAX;
  int normal = INT_MAX;

  printf("The value of unsigned int is: %d\n", positive);
  printf("The value of normal int is: %d\n", normal);

  positive++;
  normal++;

  printf("Max value of unsigned int is: %d\n", positive);
  printf("Max value of normal int is: %d\n", normal);

  return 0;
}

unsigned long long factorial_20_ll() {
  long long result = 1;
  for (int i = 1; i <= 20; i++) {
    result *= i;
  }
  return result;
}

unsigned long factorial_20() {
  long result = 1;
  for (int i = 1; i <= 20; i++) {
    result *= i;
  }
  return result;
}

long kilo_to_miles(long kilometers) {
  return (float)kilometers / 1.609;
}