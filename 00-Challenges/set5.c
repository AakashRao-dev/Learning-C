#include <stdio.h>
#include <time.h>

void greet();
int sum(int, int, int, int);
int square(int);
// void print_date();
float max(float, float);
void increment(int);
int average(int, int, int, int, int);
int fib(int);
int isPalindrome(int);
int reverseNumber(int, int);

int main() {
  // ************** 1. GREET PRINTS HELLO, WORLD! **************
  // greet();

  // ************** 2. PRINTS SUM OF 4 PARAMETERS **************
  // int p = 10, q = 20, r = 30, s = 40;
  // int add = sum(p, q, r, s);
  // printf("%d\n", add);

  // ************** 3. FUNCTION RETURNING SQUARE **************
  // int num;
  // printf("Enter a number: ");
  // scanf("%d", &num);

  // printf("The square of number %d is %d", num, square(num));

  // ************** 4. FUNCTION RETURNING DATE **************
  // TODO: TO BE DONE LATER AFTER POINTER

  // ************** 5. RETUNR MAX OF TWO FLOAT NUMBERS **************
  // printf("The greater float value is: %f", max(847.23, 384.2));

  // ************** 6. CHECK NUMBER AFTER INCREMENT **************
  // int num = 63;
  // printf("Number check before increment: %d\n", num);
  // increment(num);
  // printf("Number check before increment: %d\n", num);

  // ************** 7. AVERAGE FUNCTION TAKING FIVE INT PARAMS **************
  // int avg = average(5, 4, 3, 2, 1);
  // printf("The average of numbers is: %d", avg);

  // ************** 8. FIBONACCI SERIES USING RECURSION **************
  // int num;
  // printf("Enter the number for fibonacci series: ");
  // scanf("%d", &num);

  // printf("Fibonacci series: \n");
  // for (int i = 0; i < num; i++) {
  //   printf("%d ", fib(i));
  // }

  // ************** 8. CHECK IF PALINDROME USING RECURSION **************
  // int num;
  // printf("Enter a number: ");
  // scanf("%d", &num);

  // if (isPalindrome(num)) {
  //   printf("Palindrome\n");
  // } else {
  //   printf("Not a palindrome\n");
  // }

  return 0;
}

/*
int reverseNumber(int n, int rev) {
  if (n == 0) return rev;
  return reverseNumber(n / 10, rev * 10 + (n % 10));
}

int isPalindrome(int n) {
  if (n < 0) return 0;  // negative numbers are not palindromes by default
  int reversed = reverseNumber(n, 0);
  return (n == reversed);
}

int fib(int num) {
  if (num == 0) return 0;
  if (num == 1) return 1;
  return fib(num - 1) + fib(num - 2);
}

int average(int a, int b, int c, int d, int e) {
  return (a + b + c + d + e) / 5;
}

void increment(int num) {
  num++;
  printf("Number check before increment: %d\n", num);
}

float max(float a, float b) {
  return a > b ? a : b;
}

// void print_date() {
//   printf();
// }

int square(int num) {
  return num * num;
}

int sum(int a, int b, int c, int d) {
  return a + b + c + d;
}

void greet() {
  printf("Hello, World!\n");
}
*/