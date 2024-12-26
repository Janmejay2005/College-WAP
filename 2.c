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

