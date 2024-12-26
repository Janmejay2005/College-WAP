#include <stdio.h>
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number % 2 == 0) 
        printf("The number is even.\n");
    else
        printf("The number is odd.\n");
}

#Algorithm:
Step 1 - Start
Step 2 - Input: Prompt the user to enter a number.
Step 3 - Check if the number is divisible by 2 using the modulus operator (%).
Step 4 - If number % 2 equals 0, the number is even.
Step 5 - If number % 2 does not equal 0, the number is odd.
Step 6 - Output the result.
Step 7 - End
