#include <stdio.h>
#include <string.h>

int main() {
  // 4 items (strings) each will be have max cap of 20 characters
  char names[4][20] = {
    "Nefer",
    "Lauma",
    "Aino C6",
    "Barbara C6"
  };

  // for (int i = 0; i < 4; i++) {
  //   puts(names[i]);
  // }

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < strlen(names[i]); j++) {
      printf("%c ", names[i][j]);
    }
    printf("\n");
  }

  return 0;
}