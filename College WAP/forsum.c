#include<stdio.h>
int main() {
    int number, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    for (int i = 1; i <= number; i++)
        sum += i;
    printf("The sum of all numbers up to %d is: %d\n", number, sum);
}
