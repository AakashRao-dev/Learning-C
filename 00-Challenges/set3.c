#include <stdio.h>
#include <stdlib.h>

int main() {
  // **************** 1. DETERMINE POSITIVE, NEGATIVE OR ZERO ****************

  /* int num;
  printf("Enter a number: ");
  scanf("%d", &num);

  if (num >= 1) {
    printf("The number %d is Positive.", num);
  } else if (num == 0) {
    printf("The number %d is Zero.", num);
  } else {
    printf("The number %d is Negative.", num);
  } */

   // **************** 2. DETERMINE ODD OR EVEN ****************
   /* int num;
   printf("Enter a number: ");
   scanf("%d", &num);

   if (num % 2 == 0) {
    printf("The number %d is Even.", num);
   } else {
    printf("The number %d is Odd.", num);
   } */

  // **************** 3. GREATEST OF THREE NUMBERS ****************
  /* int n1, n2, n3;

  printf("Enter your first number: ");
  scanf("%d", &n1);

  printf("Enter your second number: ");
  scanf("%d", &n2);

  printf("Enter your third number: ");
  scanf("%d", &n3);

  if (n1 > n2 && n1 > n3) {
    printf("Number %d is greatest!", n1);
  } else if (n2 > n1 && n2 > n3) {
    printf("Number %d is greatest!", n2);
  } else {
   printf("Number %d is greatest!", n3);
  } */

  // **************** 4. DETERMINE LEAP YEAR ****************
  /* int year;
  printf("Enter the year: ");
  scanf("%d", &year);

  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
    printf("It's a leap year!");
  } else {
    printf("It's not a leap year!");
  } */

  // **************** 5. CALCULATE GRADES BASED ON MARKS ****************
  /* char grade;
  printf("Enter your grade (A-F): ");
  scanf(" %c", &grade);

  switch(grade) {
    case 'A':
      printf("Above 90%%");
      break;
    case 'B':
      printf("Above 75%%");
      break;
    case 'C':
      printf("Above 60%%");
      break;
    case 'D':
      printf("Above 30%%");
      break;
    case 'F':
      printf("Below 30%%");
      break;
    default:
      printf("Out of Range (-1)");
  } */

  // **************** 6. CATEGROIZE AGE GROUPS ****************
  /* int age;
  printf("Enter your age: ");
  scanf("%d", &age);

  if (age > 60) {
    printf("Senior");
  } else if (age < 60) {
    printf("Adult");
  } else if (age < 20) {
    printf("Teen");
  } else {
    printf("Child");
  } */

  // **************** 7. MIN. OF 2 NUMBERS USING TERNARY ****************
  /* int n1, n2;

  printf("Enter your first number: ");
  scanf("%d", &n1);

  printf("Enter your second number: ");
  scanf("%d", &n2);

  n1 > n2 ? printf("%d is greater than %d", n1, n2) : printf("%d is greater than %d", n2, n1); */

  // **************** 8. DETERMINE EVEN OR ODD USING TERNARY ****************
  /* int num;

  printf("Enter your favorite number: ");
  scanf("%d", &num);

  num % 2 == 0 ? printf("Your favorite number %d is Even!", num) : printf("Your favorite number %d is Odd!", num); */

  // ************* 9. CALCULATE ABSOLUTE VALUE USING TERNARY *************
  /* int num;

  printf("Enter an Integer value: ");
  scanf("%d", &num);

  int abs_value = num < 0 ? abs(num) : num;
  printf("Absolute value of %d is %d!", num, abs_value); */

  // ************* 10. CATEGORIZE SCORES USING TERNARY *************
  /* int score;
  printf("Enter your score: ");
  scanf("%d", &score);

  score > 80 ? printf("High") :
    score >= 50 && score <= 80 ? printf("Moderate") : printf("Low"); */

  // ************* 11. PRINT MONTH OF THE YEAR *************
  /* int month;

  printf("Enter the month of the year (1-12): ");
  scanf("%d", &month);

  switch(month) {
    case 1:
      printf("It's January");
      break;
    case 2:
      printf("It's February");
      break;
    case 3:
      printf("It's March");
      break;
    case 4:
      printf("It's April");
      break;
    case 5:
      printf("It's May");
      break;
    case 6:
      printf("It's June");
      break;
    case 7:
      printf("It's July");
      break;
    case 8:
      printf("It's August");
      break;
    case 9:
      printf("It's September");
      break;
    case 10:
      printf("It's October");
      break;
    case 11:
      printf("It's November");
      break;
    case 12:
      printf("It's December");
      break;
    default:
      printf("Out of Range, Please enter a correct month number");
  } */

  // ***************** 12. SIMPLE CALCULATOR *****************

  // Steps:
  // 1. Get the numbers for operation
  // 2. Ask for the operation m-multiply, a-addition, s-subtraction, d-division
  // 3. Based on input perform operation and print the result

  /* int n1, n2;
  char operation;

  printf("Enter your first number: ");
  scanf("%d", &n1);

  printf("Enter your second number: ");
  scanf("%d", &n2);

  printf("Select an operation (A-Addition, S-Subtraction, M-Multiply, D-Division): ");
  scanf(" %c", &operation);

  switch(operation) {
    case 'A':
      printf("%d + %d = %d", n1, n2, n1 + n2);
      break;
    case 'S':
      printf("%d - %d = %d", n2, n1, n2 - n1);
      break;
    case 'M':
      printf("%d * %d = %d", n1, n2, n1 * n2);
      break;
    case 'D':
      printf("%d / %d = %d", n2, n1, n2 / n1);
  } */

  return 0;
}