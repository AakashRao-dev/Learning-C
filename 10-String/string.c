#include <stdio.h>

int main() {
  // 4 Different ways to define a string
  // char c1[] = "abcd"; // most common way
  // char c2[50] = "abcd";
  // char c3[] = {'a', 'b', 'c', 'd', '\0'};
  // char c4[5] = {'a', 'b', 'c', 'd', '\0'};

  // FORMAT SPECIFIERS
  char name[50];
  printf("Please enter your name: ");
  scanf(" %49s", name);
  printf("Good Morning %s!\n", name);

  return 0;
}