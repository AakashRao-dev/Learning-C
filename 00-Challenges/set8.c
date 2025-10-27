#include <stdio.h>

int main() {
  // 1. =========== SUM & AVERAGE OF ALL ELEMENTS IN AN ARRAY ===========
  /* int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int no_of_elements = sizeof(arr1) / sizeof(arr1[0]);

  int sum = 0;
  for (int i = 0; i < no_of_elements; i++) {
    sum += arr1[i];
  }
  printf("Sum of all elements of the array is: %d\n", sum);

  int average = sum / no_of_elements;
  printf("The average of elements is: %d\n", average); */

  // 2. ========== NUMBER OF OCCURENCES OF ELEMENT ON AN ARRAY ==========
  /* int nums[10];
  int visited[10] = {0};
  int i, j, count;

  // Step-1: Take the input from the user
  for (int i = 0; i < 10; i++) {
    printf("Enter a number: ");
    scanf(" %d", &nums[i]);
  }

  // Step-2: Count Occurences
  printf("\nOccurences of each number:\n");
  for (i = 0; i < 10; i++) {
    // skip if already counted
    if (visited[i] == 1)
      continue;

    count = 1; // start count for nums[i]

    // Compare with reamaining element
    for (j = i + 1; j < 10; j++) {
      if (nums[i] == nums[j]) {
        count++;
        visited[j] = 1; // mark as counted
      }
    }

    // Print the count for current unique number
    printf("%d occurs %d times\n", nums[i], count);
  } */

  // 3. ================= FIND MAX & MIN IN AN ARRAY =================

  // 4. ================= CHECK IF THE GIVEN ARRAY IS SORTED =================

  // 5. ================= RETURN A NEW ARRAY DELETING A SPECIFIC ELEMENT =================

  // 6. ================= REVERSE AN ARRAY =================

  // 7. ================= CHECK IF AN ARRAY IS PALINDROME =================

  // 8. ================= POINTER ARITHMETIC TO COPY AN ARRAY OF CHAR INTO ANOTHER =================

  // 9. ================= MERGE TWO SORTED ARRAYS =================

  // 10. ================= SEARCH AN ELEMENT IN A 2D ARRAY =================

  // 11. ================= SUM AND AVERAGE OF ALL ELEMENTS IN 2D ARRAY =================

  // 12. ================= FIND SUM OF TWO DIAGONAL ELEMENTS =================

  return 0;
}