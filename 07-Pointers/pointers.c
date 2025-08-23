#include <stdio.h>

int main() {
  int i = 64;
  int *j; // pointer variable j stores the address of i
  int **k; // pointer to a pointer variable

  j = &i;
  k = &j;

  printf("Address of i = %p\n", &i);
  printf("Address of i (stored in j) = %p\n", j);
  printf("Address of i (stored in k) = %p\n", *k);
  printf("Address of j = %p\n", &j);
  printf("Address of j (stored in k) = %p\n", k);
  printf("Address of k = %p\n", &k);

  printf("Value of j = %p\n", j);
  printf("Value of k = %p\n", k);
  printf("Value of i = %d\n", i);
  printf("Value of i (derefrence of address of i) = %d\n", *(&i));
  printf("Value of i (derefrence of j) = %d\n", *j);
  printf("Value of i (derefernce two times of k) = %d\n", **k);


  return 0;
}