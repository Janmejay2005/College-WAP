#include<stdio.h>
int main(){
    int l;
    printf("Enter a year - ");
    scanf("%d", &l);
    if ((l % 4 == 0 && l % 100 != 0) || (l % 400 == 0))
        printf("%d is a leap year.\n", l);
    else
        printf("%d is not a leap year.\n", l);
}

#Algorithm:
Step 1 - Start
Step 2 - Declare a variable to store the year.
Step 3 - Input: Prompt the user to enter the year.
Step 4 - Check:
    If the year is divisible by 400, it is a leap year.
    If the year is divisible by 100 but not by 400, it is not a leap year.
    If the year is divisible by 4 but not by 100, it is a leap year.
    Otherwise, it is not a leap year.
Step 5 - Output: Print whether the year is a leap year or not.
Step 6 - End
