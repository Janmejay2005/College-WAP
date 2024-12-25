#include <stdio.h>
int main() {
    int number, factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (int i = 1; i <= number; i++) {
            factorial *= i;
        }
        printf("Factorial of %d is %d\n", number, factorial);
    }
}

#Algorithm:
Step 1 - Start
Step 2 - Declare variables to store the number and the factorial result.
Step 3 - Input: Prompt the user to enter a non-negative integer.
Step 4 - Initialize the factorial result to 1.
Step 5 - Calculate the factorial using a loop:
          Multiply the factorial result by each integer from 1 to the given number.
Step 6 - Output: Print the factorial result.
Step 7 - End
