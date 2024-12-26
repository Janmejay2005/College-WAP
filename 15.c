#include <stdio.h>
int main() {
    int n, t1 = 0, t2 = 1, nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: %d, %d", t1, t2);
    for (int i = 3; i <= n; ++i) {
        nextTerm = t1 + t2;
        printf(", %d", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
}

#Algorithm:
Step 1 - Start
Step 2 - Declare variables to store the number of terms, the first term, the second term, and the next term in the series.
Step 3 - Input: Prompt the user to enter the number of terms.
Step 4 - Initialize the first term to 0 and the second term to 1.
Step 5 - Print the first and second terms.
Step 6 - Use a loop to calculate the next terms in the series:
					Update the next term as the sum of the first and second terms.
					Print the next term.
					Update the first term to the second term and the second term to the next term.
Step 7 - End
