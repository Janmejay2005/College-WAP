#include <stdio.h>
#include <math.h>
int main() {
    int number, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number <= 1) {
        printf("The number is not prime.\n");
    } else {
        for (int i = 2; i <= sqrt(number); i++) {
            if (number % i == 0) {
                isPrime = 0; 
                break;
            }
        }
        if (isPrime) {
            printf("The number is prime.\n");
        } else {
            printf("The number is not prime.\n");
        }
    }
}


#Algorithm:
Step 1 - Start
Step 2 - Input: Prompt the user to enter a number.
Step 3 - Check if the number is less than 2:
					If true, the number is not prime.
Step 4 - Loop from 2 to the square root of the number:
					If the number is divisible by any number in this range, it is not prime.
Step 5 - If no divisors are found, the number is prime.
Step 6 - Output the result.
Step 7 - End
