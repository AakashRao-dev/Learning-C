#include <stdio.h>
#include <math.h>

int main() {
  // **************** 1. ARITHMETIC OPERATIONS WITH 2 NUM ****************

  /*
  int num1, num2;

  printf("Enter your First Number (smaller than 2nd number): ");
  scanf("%d", &num1);

  printf("Enter your Second Number (bigger than 1st number): ");
  scanf("%d", &num2);

  int add = num1 + num2;
  int sub = num2 - num1;
  int multiply = num1 * num2;
  float division = num2 / num1;
  int remainder = num2 % num1;

  printf("Addition of numbers %d and %d is: %d\n", num1, num2, add);
  printf("Subtraction of numbers %d and %d is: %d\n", num1, num2, sub);
  printf("Multiplication of numbers %d and %d is: %d\n", num1, num2, multiply);
  printf("Division of numbers %d and %d is: %.2f\n", num1, num2, division);
  printf("Modulus of numbers %d and %d is: %d\n", num1, num2, remainder);

  printf("\n");
  */

  // *************************************************************
  // **************** 2. CONVERT INTEGER TO FLOAT ****************

  /*
  int num;

  printf("Enter a random integer value: ");
  scanf("%d", &num);

  float convertedNum = (float)num;
  printf("Integer value is: %d and Float value is: %.2f\n", num, convertedNum);

  printf("\n");
  */

  // ************************************************************
  // **************** 3. PRODUCT OF 2 FLOAT NUMs ****************
  /*
  float n1, n2;

  printf("Enter first decimal value: ");
  scanf("%f", &n1);

  printf("Enter second decimal value: ");
  scanf("%f", &n2);

  printf("The product of float values are: %.2f * %.2f = %.2f\n", n1, n2, n1 * n2);

  printf("\n");
  */

  // *************************************************************
  // **************** 4. PERIMETER OF A RECTANGLE ****************

  /*
  int length, width;

  printf("Enter the length of rectangle: ");
  scanf("%d", &length);

  printf("Enter the width of rectangle: ");
  scanf("%d", &width);

  printf("The perimeter of rectange is: %d\n", 2 * (length + width));
  */

  // *************************************************************
  // ******************** 5. AREA OF TRIANGLE ********************

  /*
  int base, height;

  printf("Enter the base of Traingle (in cm): ");
  scanf("%d", &base);

  printf("Enter the height of Traingle (in cm): ");
  scanf("%d", &height);

  printf("The area of traingle with base (%d) and height (%d) is: %.2f\n", base, height, 0.5 * base * height);
  */

  // ************************************************************
  // ******************** 6. SIMPLE INTEREST ********************

  /*
  int principal, time;
  float rate;

  printf("Principal amount: ");
  scanf("%d", &principal);

  printf("Time Duration (in years): ");
  scanf("%d", &time);

  printf("Interest Rate (per year): ");
  scanf("%f", &rate);

  float SI = (principal * time * rate) / 100;
  printf("Simple Interest is: %.2f\n", SI);
  */

  // ********************************************************
  // ***************** 7. COMPOUND INTEREST *****************

  /*
  int principal, time;
  double rate;

  printf("Principal Amount: ");
  scanf("%d", &principal);

  printf("Time Duration (in years): ");
  scanf("%d", &time);

  printf("Rate of Interest (per annum): ");
  scanf("%lf", &rate);

  double amount = principal * pow((1 + (rate / 100)), time);
  double CI = amount - principal;
  printf("Compound Interest is: %.2lf\n", CI);
  */

  // ******************************************************
  // ************** 8. FAHRENHEIT TO CELSIUS **************

  /*
  float fahrenheit;

  printf("Enter the Fahrenheit (for conversion to celsius): ");
  scanf("%f", &fahrenheit);

  float celsius = (fahrenheit - 32) * 5 / 9;
  printf("Converted Fahrenheit to Celsius is: %.2f\n", celsius);
  */

  return 0;
}