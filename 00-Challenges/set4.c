#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  // ****************** 1. PRINT MULTIPLICATION TABLE ******************
  /* int num;
  printf("Enter a number for which you want the table: ");
  scanf("%d", &num);

  for (int i = 1; i <= 10; i++) {
    printf("%d x %d = %d\n", num, i, num * i);
  } */

  // ****************** 2. SUM ALL ODD NUMBERS ******************

  /* int num;
  printf("Enter a number: ");
  scanf("%d", &num);

  int i = 1;
  int sum = 0;
  while (i != num) {
    if (i % 2 == 0) {
      i++;
      continue;
    }
    sum = sum + i;
    i++;
  }
  printf("Sum of all odd numbers is: %d", sum); */

  // ****************** 3. CALCULATE THE FACTORIAL ******************
  /* int num;
  printf("Enter a number: ");
  scanf("%d", &num);

  int i = 1;
  int factorial = 1;

  if (num != 0) {
    for (int i = 1; i <= num; i++) {
      factorial = factorial * i;
    }
  }

  printf("The factorial of numbers from 1 to %d is: %d", num, factorial); */

  // ****************** 4. SUM OF THE DIGITS OF AN INTEGER ******************
  /* int num;
  printf("Enter an Integer: ");
  scanf("%d", &num);

  int abs_integer = abs(num);
  int sum_of_digits = 0;

  while (abs_integer != 0) {
    int last_digit = abs_integer % 10; // catch the last digit
    sum_of_digits = sum_of_digits + last_digit;
    abs_integer = abs_integer / 10; // chop of the digit
  }

  printf("Sum of Integer digits %d is %d", num, sum_of_digits); */

  // ****************** 5. LCM OF TWO NUMBERS ******************
  /* int n1, n2;
  printf("Enter the first number: ");
  scanf("%d", &n1);

  printf("Enter the second number: ");
  scanf("%d", &n2);

  int a = n1;
  int b = n2;

  // Euclidean algorithm for gcd
  // GCD(12,18) → 18 % 12 = 6
  // GCD(12,6) → 12 % 6 = 0 → GCD is 6

  while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
  }
  int gcd = a;

  // TO CALCULATE LCM
  int lcm = (n1 * n2) / gcd;
  printf("The LCM of two numbers %d and %d is: %d\n", n1, n2, lcm); */

  // ****************** 5. GCD OF TWO NUMBERS ******************
  /* int n1, n2;
  printf("Enter your first integer number: ");
  scanf("%d", &n1);

  printf("Enter your second integer number: ");
  scanf("%d", &n2);

  int a = abs(n1);
  int b = abs(n2);

  while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
  }

  int gcd = a;
  printf("The Greatest Common Divisor (GCD) of two integers %d and %d: %d", n1, n2, gcd); */

  // ****************** 5. CHECK IF A GIVEN NUMBER IS PRIME OR NOT ******************
  /* int num;
  printf("Enter your number: ");
  scanf("%d", &num);

  if (num <= 1) {
    printf("The number %d is not a prime number\n", num);
    return 0;
  }

  // Check from 2 to n-1
  int isPrime = 1;
  int i = 2;
  while (i < num) {
    if (num % i == 0) {
      isPrime = 0;
      break;
    }
    i++;
  }

  if (isPrime) {
    printf("The number %d is indeed a prime number\n", num);
  } else {
    printf("The number %d is not a prime number\n", num);
  } */

  // ****************** 5. REVERSE THE DIGITS OF AN INTEGER ******************
  /* int num, reversed_num = 0, remainder;
  printf("Please enter your number: ");
  scanf("%d", &num);

  printf("Your orginal number is: %d\n", num);
  while (num != 0) {
    remainder = num % 10; // gives the last digit
    reversed_num = reversed_num * 10 + remainder;
    num = num / 10; // removes the last digit
  }
  printf("And reversed number is: %d\n", reversed_num); */

  // ****************** 6. PRINT FIBONACCI TILL N TERMS ******************
  /* int n;
  printf("Enter the number for fibonacci sequence series: ");
  scanf("%d", &n);

  if (n < 1) {
    printf("Invalid number of terms!");
    return 0;
  }

  int prev1 = 1;
  int prev2 = 0;

  printf("%d ", prev2);

  if (n == 1) {
    return 0;
  };

  printf("%d ", prev1);

  for (int i = 3; i <= n; i++) {
    int curr = prev1 + prev2;
    prev2 = prev1;
    prev1 = curr;
    printf("%d ", curr);
  } */

  // ****************** 7. CHECK IF ARMSTRONG NUMBER ******************
  /* int num;
    printf("Enter an integer value: ");
    scanf("%d", &num);

    if (num == 0) {
      printf("The number 0 is an Armstrong number!\n");
      return 0;
    }

    // Count digits
    int count = 0;
    int num_copy = num;
    while (num_copy != 0) {
      num_copy /= 10;
      count++;
    }

    // Calculate Armstrong sum
    int sum = 0;
    int num_copy2 = num;
    while (num_copy2 != 0) {
      int digit = num_copy2 % 10;
      sum += (int)(pow(digit, count) + 0.5);  // cast result to int
      num_copy2 /= 10;
    }

    // Check if Armstrong
    if (sum == num) {
        printf("The number %d is indeed an Armstrong number!\n", num);
    } else {
        printf("It's not an Armstrong number!!\n");
    } */

  // ****************** 8. CHECK IF A NUMBER IS PALINDROME ******************
  /* int num;
  printf("Enter your number to check if it's a palindrome: ");
  scanf("%d", &num);

  // To reverse the digits of the number
  int num_copy = num, reversed_num = 0, remainder;
  int count = 0;
  while (num_copy != 0) {
    remainder = num_copy % 10;
    reversed_num = reversed_num * 10 + remainder;
    num_copy /= 10;
    count++;
  }

  if (count == 1) {
    printf("Enter atleast a two digit number!");
    return 0;
  }

  // Check if it's palindrome
  if (num == reversed_num) {
    printf("The number %d is indeed a Palindrome number", num);
  } else {
    printf("The number %d is not a Palindrome number :(", num);
  } */

  // ****************** 9. PRINT PATTERNS ******************
  /*
  // RIGHT HALF PYRAMID
  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= i; j++) {
      printf("%s", "* ");
    }
    printf("\n");
  }
  printf("\n");

  // REVERSE RIGHT HALF PYRAMID
  for (int i = 5; i >= 1; i--) {
    for (int j = 1; j <= i; j++) {
      printf("%s", "* ");
    }
    printf("\n");
  }
  printf("\n");

  // LEFT HALF PYRAMID
  for (int i = 1; i <= 5; i++) {
    for (int s = 1; s <= 5 - i; s++) {
      printf("  ");
    }
    for (int j = 1; j <= i; j++) {
      printf("* ");
    }
    printf("\n");
  } */

  // *********** 10. CHECK IF NUM IS POSITIVE WITH DO-WHILE LOOP ***********
  /* int num;

  do {
    printf("Enter a positive number: ");
    scanf("%d", &num);
  } while (num < 0); */

  // ***************** 11. CALCULATE SUM OF ALL NUMBERS *****************
  /* int num, sum = 0;

  do {
    printf("Enter a number: ");
    scanf("%d", &num);
    sum += num;
  } while (num != 0);

  printf("The sum of entered numbers is: %d", sum); */

  // ***************** 11. FOR LOOP PRINTING TABLES *****************
  /* int num;
  printf("Enter a number for which you want the table: ");
  scanf("%d", &num);

  printf("Printing the tables now!\n");
  for (int i = 1; i <= 10; i++) {
    printf("%d x %d = %d\n", num, i, num * i);
  } */

  // ***************** 12. DISPLAY PRIME OR NOT USING FOR *****************
  /* int num;
  printf("Enter a number to check if it's prime or not: ");
  scanf("%d", &num);

  if (num == 1) {
    return 0;
  }

  int isPrime = 1;
  for (int i = 2; i < num; i++) {
    if (num % i == 0) {
      isPrime = 0;
      break;
    }
  }

  if (isPrime) {
    printf("The number %d is indeed a prime number!", num);
  } else {
    printf("The number %d is not a prime number!!", num);
  } */

  // ************** 13. SUM OF POSTIVE NUMBER SKIP IF NEGATIVE **************
  /* int num, sum = 0;

  do {
    printf("Enter your number: ");
    scanf("%d", &num);
    if (num < 0) {
      continue;
    }
    sum += num;
  } while (num != 0);

  printf("The sum of numbers is: %d", sum); */

  // ************** 14. PRINT ONLY EVEN NUMBERS **************
  /* printf("Printing all even numbers from 1 to 100: \n");
  for (int i = 1; i <= 100; i++) {
    if (i % 2 == 1) {
      continue;
    }
    printf("%d ", i);
  } */

  // **************** 15. PRINT ONLY EVEN NUMBERS ****************
  /* int num, square = 1;

  do {
    printf("Enter your number: ");
    scanf("%d", &num);

    if (num == -1) {
      break;
    }

    square = (int)(pow(num, 2) + 0.5);
    printf("The square of number is: %d \n", square);

  } while (num != 1); */

  return 0;
}