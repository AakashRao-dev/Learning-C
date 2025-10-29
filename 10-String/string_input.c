#include <stdio.h>

int main() {
  char name[100];

  // printf("Please enter your name: ");
  // gets(name); // UNSAFE option to get user input

  // printf("Good Morning \n");
  // puts(name); // Outputs the string followed by a newline

  printf("Now enter your nickname: ");
  fgets(name, sizeof(name), stdin); // SAFE alternative to gets (file gets)
  printf("Good Morning ");
  puts(name);

  return 0;
}