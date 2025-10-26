#include <stdio.h>


// 1. Auto Storage Class (All variables are auto by default so no keyword required)
/* void autoExample() {
  // An auto variable (through auto keyword is usually ommited)
  int autoVar = 10;
  printf("The value of autoVar is: %d\n", autoVar);
  // autoVar is destoryed here as it goes out of scope
}

int main() {
  autoExample();
  // autoExample() has finished; autoVar is no longer accessible
  return 0;
} */

// 2. Register Storage Class (Hints to storage value in CPU Register)
/* int main() {
  // Suggests storing counter in a register
  register int counter;
  for (counter = 0; counter < 5; counter++) {
    printf("Counter is %d\n", counter);
  }

  // Note: Attempting to get the address of counter
  // like &counter, will cause a compile error
  return 0;
} */

// 3. Static Storage Class (retain value between function calls)
/* void incrementCounter() {
  // A static variable retains it value between function calls
  static int counter = 0;
  counter++;
  printf("Counter is %d\n", counter);
}

int main() {
  for (int i = 0; i < 3; i++) {
    // Each call with increment the counter
    incrementCounter();
  }
  // The counter retains its value between calls
  // and is not reinitialized
  return 0;
} */

// 4. External Stoage Class (variable can be accesed across multiple files)

// Declaration of an external variable
extern int extVar;

void printExtVar(); // Declaration of function that uses extVar

int main() {
  printExtVar();
  return 0;
}