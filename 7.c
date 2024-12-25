#include<stdio.h>
int main() {
    int a,b,c;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("Enter the third number: ");
    scanf("%d",&c);
    if(a>b && a>c)
        printf("%d is the greatest number",a);
    else if(b>a && b>c)
        printf("%d is the greatest number",b);
    else
        printf("%d is the greatest number",c);
}

#Algorithm:
Step 1 - Start
Step 2 - Initialize: Declare three variables to store the numbers.
Step 3 - Input: Prompt the user to enter three numbers.
Step 4 - Comparison:
Step 5 - Compare the first and second numbers.
Step 6 - Compare the greatest of the first two with the third number.
Step 7 - Output: Display the greatest number.
Step 8 - End
