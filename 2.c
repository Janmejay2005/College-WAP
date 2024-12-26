#include <stdio.h>
#include <math.h>
int main() {
    double P, R, T, SI, CI;
    printf("Enter Principal: ");
    scanf("%lf", &P);
    printf("Enter Rate of Interest: ");
    scanf("%lf", &R);
    printf("Enter Time (in years): ");
    scanf("%lf", &T);
    SI = (P * R * T) / 100;
    CI = P * pow((1 + R / 100), T) - P;
    printf("Simple Interest: %.2lf\n", SI);
    printf("Compound Interest: %.2lf\n", CI);
}

#Algorithm:
Step 1 - Start
Step 2 - Input: Prompt the user to enter Principal, Rate of Interest, and Time.
Step 3 - Calculate Simple Interest using the formula:
        SI=𝑃×𝑅×𝑇
           _____
            100
​Step 4 - Calculate Compound Interest using the formula:
        CI=P(1+ R/100)^t−P
Step 5 - Output the Simple Interest and Compound Interest.
Step 6 - End
