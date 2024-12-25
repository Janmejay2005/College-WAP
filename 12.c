#include<stdio.h>
int main() {
    int number, sum = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &number);
    while (number != 0) {
        digit = number % 10;  
        sum = sum + digit;    
        number = number / 10;
        printf("Sum of digits: %d\n", sum);
    }
}

#Algorithm:
Step 1 - Start
Step 2 - Initialize: Declare variables for the number and the sum.
Step 3 - Input: Prompt the user to enter a number.
Step 4 - Sum Calculation:
        Use a loop to calculate the sum of all numbers from 1 to the entered number.
Step 5 - Output: Display the sum.
Step 6 - End
