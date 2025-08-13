#include <stdio.h>

int main() {
  // *************** 1. USING MULTI-LINE PRINTF ***************
  // RIGHT HALF PYRAMID
  printf("*\n");
  printf("* *\n");
  printf("* * *\n");
  printf("* * * *\n");
  printf("* * * * *\n");

  printf("\n");

  // REVERSE RIGHT HALF PYRAMID
  printf("* * * * *\n");
  printf("* * * *\n");
  printf("* * *\n");
  printf("* *\n");
  printf("*\n");

  printf("\n");

  // LEFT HALF PYRAMID
  printf("        *\n");
  printf("      * *\n");
  printf("    * * *\n");
  printf("  * * * *\n");
  printf("* * * * *\n");

  printf("\n");

  // ***********************************************************
  // *************** 2. USING SINGLE-LINE PRINTF ***************
  // RIGHT HALF PYRAMID - SINGLE LINE
  printf("*\n* *\n* * *\n* * * *\n* * * * *\n");

  printf("\n");

  // REVERSE RIGHT HALF PYRAMID - SINGLE LINE
  printf("* * * * *\n* * * *\n* * *\n* *\n*\n");

  printf("\n");

  // LEFT HALF PYRAMID
  printf("        *\n      * *\n    * * *\n  * * * *\n* * * * *\n");

  printf("\n");

  // **********************************************************
  // *************** 3. USER INPUT & PRINT NAME ***************
  char name[50];
  printf("Enter your name: ");
  scanf("%[^\n]", name);
  printf("Welcome %s to KG Coding!\n", name);

  printf("\n");

  // ***********************************************************
  // *************** 4. DISPLAY 2 INTEGER INPUTs ***************
  int num1, num2;

  printf("Enter your 2 numbers: ");
  scanf("%d %d", &num1, &num2);
  printf("Your two numbers are %d and %d\n", num1, num2);
  printf("\n");

  // *******************************************************
  // *************** 5. DISPLAY SIZEOF TYPES ***************
  int age;
  char fullName[50];
  char job[20];
  float favNum;

  printf("Enter your Age: ");
  scanf("%d", &age);

  printf("Enter your favorite Decimal no: ");
  scanf("%f", &favNum);

  while (getchar() != '\n');
  printf("Enter your Full Name: ");
  fgets(fullName, sizeof(fullName), stdin);

  printf("Enter your Job: ");
  fgets(job, sizeof(job), stdin);

  printf("Size of age variable (int) is: %zu bytes.\n", sizeof(age));
  printf("Size of fullName variable (string) is: %zu bytes.\n", sizeof(fullName));
  printf("Size of favNum is: %zu bytes.\n", sizeof(favNum));

  // ********************************************************
  // ********* 6. DISPLAY USER INFO (ALREADY DONE) **********

  printf("\n");

  // *********************************************************
  // **************** 7. PRINT AREA OF SQUARE ****************
  float areaOfSquare;
  float side;

  printf("Enter the side of Square: ");
  scanf("%f", &side);

  areaOfSquare = side * side;
  printf("Area of Square is: %.2f\n", areaOfSquare);

  // *********************************************************
  // ************* 8. CIRCUMFERENCE OF CIRLCE ****************

  const float PI = 3.1425;
  float radius;
  float circumference;

  printf("Enter the radius of circle: ");
  scanf("%f", &radius);

  circumference = 2 * PI * radius;
  printf("The circumference of circle is %.2f\n", circumference);


  // *********************************************************
  // ***************** 9. AREA OF CIRCLE *********************

  float areaOfCircle = PI * radius * radius;
  printf("Area of Circle is: %.2f\n", areaOfCircle);

  // *********************************************************
  // ***************** 10. SWAP TWO NUMBERS ******************

  int n1, n2;

  printf("Enter your First Number: ");
  scanf("%d", &n1);

  printf("Enter your Second Number: ");
  scanf("%d", &n2);

  int temp;
  temp = n1;
  n1 = n2;
  n2 = temp;

  printf("After swap First Number is: %d and Second Number is: %d\n", n1, n2);

  return 0;
}