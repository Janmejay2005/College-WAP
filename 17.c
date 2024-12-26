#include <stdio.h>
int main() {
    int number, sum = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &number);
    while (number > 0) {
        digit = number % 10; 
        sum += digit;        
        number /= 10;     
    }
    printf("Sum of digits: %d\n", sum);
}

#Algorithm:
Step 1 - Start
Step 2 - Input: Prompt the user to enter a number.
Step 3 - Initialize sum to 0.
Step 4 - Loop until the number is greater than 0:
					Extract the last digit using modulus operator (number % 10).
					Add the digit to the sum.
					Remove the last digit from the number using integer division (number / 10).
Step 5 - Output the sum of the digits.
step 6 - End
