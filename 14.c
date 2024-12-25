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
