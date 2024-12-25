#include <stdio.h>
int main() {
    int N, sumEven = 0, sumOdd = 0;
    printf("Enter a number N: ");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) { 
            sumEven += i; 
        } else {    
            sumOdd += i; 
        }
    }
    printf("Sum of even numbers: %d\n", sumEven);
    printf("Sum of odd numbers: %d\n", sumOdd);
}

#Algorithm:
Step 1 - Start
Step 2 - Initialize: Declare variables for the sum of even numbers, sum of odd numbers, and the number N.
Step 3 - Input: Prompt the user to enter a value for N.
Step 4 - Sum Calculation:
        Use a loop to iterate from 1 to N.
        If the number is even, add it to the sum of even numbers.
        If the number is odd, add it to the sum of odd numbers.
Step 5 - Output: Display the sum of even and odd numbers.
Step 6 - End
