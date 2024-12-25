#include <stdio.h>
int main() {
    float a,b,result;
    char operator;
    printf("Enter the first number: ");
    scanf("%f", &a);
    printf("Enter the second number: ");
    scanf("%f", &b);
    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operator);
    switch (operator) {
        case '+':
            result =a+b;
            printf("The result is: %.2f\n", result);
            break;
        case '-':
            result =a-b;
            printf("The result is: %.2f\n", result);
            break;
        case '*':
            result =a*b;
            printf("The result is: %.2f\n", result);
            break;
        case '/':
            if (b!= 0) {
                result =a/b;
                printf("The result is: %.2f\n", result);
            }else {
                printf("Error: Division by zero\n");
            }
            break;
            
        default:
            printf("Invalid operator\n");
    }

}
