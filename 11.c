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

#Algorithm:
Step 1 - Start
Step 2 - Input: Declare variables for the two operands and the operator.
Step 3 - Input the Operand and Operator: Prompt the user to enter two numbers and one operator.
Step 4 - Switch Statement: Use a switch statement to determine the operation based on the operator entered by the user.
        If the operator is +, perform addition.
        If the operator is -, perform subtraction.
        If the operator is *, perform multiplication.
        If the operator is /, perform division.
        For any other operator, print an error message.
Step 5 - Output: Print the result of the operation.
Step 6 - End
