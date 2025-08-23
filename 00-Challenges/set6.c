#include <stdio.h>

void minmax(int*, int*, int*, int*);

int main() {
  // ************** 1. INTEGER VARIABLE AND A POINTER **************
  // int num = 64;
  // int *ptr = &num;

  // printf("The value of number is %d!\n", *ptr);

  // ************** 2. CHANGE VALUE OF INTEGER USING POINTER **************
  // int num = 64;
  // int *ptr = &num;

  // printf("The value of num before changing the value: %d\n", num);
  // *ptr = 21;
  // printf("The value of num after changing the value: %d\n", num);

  // ************** 3. POINTER TO A CHAR **************
  // char entered_by_user;
  // printf("Enter a single character (or alphabet): ");
  // scanf("%c", &entered_by_user);

  // char *ptr = &entered_by_user;
  // printf("The character entered by the user is: %c\n", *ptr);

  // ************** 4. VOID MINMAX FUNCTION **************
  // int x = 11, y = 2, min, max;
  // int p = 21, q = 73;

  // minmax(&x, &y, &min, &max);
  // printf("min = %d and max = %d\n", min, max);

  // minmax(&p, &q, &min, &max);
  // printf("min = %d and max = %d\n", min, max);

  return 0;
}

void minmax(int *a, int *b, int *min, int *max) {
  *max = *a > *b ? *a : *b;
  *min = *a < *b ? *a : *b;
}