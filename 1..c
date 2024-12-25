#include<stdio.h>
int main(){
    float a,b,c,d,e,s,p;
    printf("Enter your First Subject Number-");
    scanf("%f",&a);
    printf("Enter your Second Subject Number-");
    scanf("%f",&b);
    printf("Enter your Third Subject Number-");
    scanf("%f",&c);
    printf("Enter your Fourth Subject Number-");
    scanf("%f",&d);
    printf("Enter your Fifth Subject Number-");
    scanf("%f",&e);
    s= a+b+c+d+e;
    p=(a+b+c+d+e)/5;
    printf("Your Total Marks %.2f\n",s);
    printf("Your Total Percentage is %.2f",p);
}

#Algorithm
Step 1 - Start
Step 2 - Declare variables to store marks of 5 subjects, sum, and percentage.
Step 3 - Input: Prompt the user to enter marks for each subject.
Step 4 - Sum Calculation: Add the marks of all 5 subjects.
Step 5 - Percentage Calculation: Calculate the percentage.
Step 6 - Output: Print the sum and percentage.
Atep 7 - End
