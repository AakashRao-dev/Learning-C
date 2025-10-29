#include <stdio.h>

int main() {
  // Character Array String - Modifiable
  char arrStr[] = "Hello";
  arrStr[0] = 'J'; // Mofifying the first character
  printf("Modified array string: %s\n", arrStr);

  // CHARACTER POINTER TO STRING LITERAL - Not modifiable
  char *ptrStr = "Hello";
  ptrStr[0] = 'J'; // Attempting to modify the first character
  printf("Pointer string (attempted modification): %s\n", ptrStr);

  return 0;
}