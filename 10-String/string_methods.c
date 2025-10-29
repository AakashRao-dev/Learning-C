#include <stdio.h>
#include <string.h>

int main() {
  // char name[50];
  // printf("Please enter your full name: ");
  // fgets(name, 50, stdin);

  // To get the length of the string
  // char new_name[50];
  // int size = strlen(name);
  // printf("Length of your name is: %d", size);

  // To copy a string into memory
  // strcpy(new_name, name);
  // printf("\nThe copied name is: %s", new_name);

  // To concate a string
  // char message[] = "Good Morning, ";
  // strcat(message, name);
  // printf(message);

  // To compare two strings (lexiographically - dictinaory wise)
  int result = strcmp("apple", "banana");
  printf("\nComparison of Apple and Banana is: %d", result);

  result = strcmp("cherry", "banana");
  printf("\nComparison of Cherry and Banana is: %d", result);

  result = strcmp("date", "date");
  printf("\nComparison of Date and Date is: %d", result);

  return 0;
}