#include <stdio.h>
int main() {
    int a,b,s;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);
    s = a;
    a = b;
    b = s;
    printf("After swapping, value of a: %d\n", a);
    printf("After swapping, value of b: %d\n", b);
}

#Algorithm:
Step 1 - Start
Step 2 - Input: Prompt the user to enter two variables.
Step 3 - Declare a third variable to use for swapping.
Step 4 - Store the value of the first variable in the third variable.
Step 5 - Assign the value of the second variable to the first variable.
Step 6 - Assign the value stored in the third variable to the second variable.
Step 7 - Output the swapped values of the two variables.
Step 8 - End
