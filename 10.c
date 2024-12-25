#include<stdio.h>
int main() {
    int a,b,c,d,e;
    float totalMarks = 500, obtainedMarks, percentage;
    printf("Enter marks for subject 1: ");
    scanf("%d", &a);
    printf("Enter marks for subject 2: ");
    scanf("%d", &b);
    printf("Enter marks for subject 3: ");
    scanf("%d", &c);
    printf("Enter marks for subject 4: ");
    scanf("%d", &d);
    printf("Enter marks for subject 5: ");
    scanf("%d", &e);
    obtainedMarks = a + b + c + d + e;
    percentage = (obtainedMarks / totalMarks) * 100;
    printf("Percentage: %.2f%%\n", percentage);
    if (percentage >= 90) 
        printf("Grade: A\n");
    else if (percentage >= 80)
        printf("Grade: B\n");
    else if (percentage >= 60) 
        printf("Grade: C\n");
    else 
        printf("Grade: D\n");
}

#Algorithm:
Step 1 - Start
Step 2 - Input: Declare variables for the marks of the five subjects and the total marks.
Step 3 - Sum Calculation: Calculate the sum of the marks obtained in the five subjects.
Step 4 - Percentage Calculation: Calculate the percentage using the formula:
            Percentage= Total Marks Obtained×100/Total Marks
Step 5 - Grade Determination: Based on the percentage, print the grade:
        Between 90% and 100%: Print 'A'
        Between 80% and 90%: Print 'B'
        Between 60% and 80%: Print 'C'
        Below 60%: Print 'D'
Step 6 - Output: Print the percentage and the grade.
Step 7 - End
