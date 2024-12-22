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
