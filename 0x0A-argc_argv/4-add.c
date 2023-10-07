#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
  int sum = 0, i;

  // Check if any arguments were passed to the program.
  if (argc == 1) {
    printf("0\n");
    return 0;
  }

  // Iterate over the arguments and check if they are valid integers.
  for (i = 1; i < argc; i++) {
    // Check if the argument is a digit.
    if (!isdigit(argv[i])) {
      printf("Error\n");
      return 1;
    }

    // Convert the argument to an integer.
    int number = atoi(argv[i]);

    // Check if the number is positive.
    if (number < 0) {
      printf("Error\n");
      return 1;
    }

    // Add the number to the sum.
    sum += number;
  }

  // Print the sum of the valid arguments.
  printf("%d\n", sum);

  return 0;
}
