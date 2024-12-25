#include <stdio.h>
int main() {
    float c,f;
    printf("Enter temperature in Centigrade: ");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("Temperature in Fahrenheit: %.2f\n", f);
}

#Algorithm 
Step 1 - Start
Step 2 - Initialize: Declare variables for temperature in Centigrade and Fahrenheit.
Step 3 - Input: Prompt the user to enter the temperature in Centigrade.
Step 4 - Conversion: Use the formula 𝐶/5=(𝐹−32)/9
Step 5 - C/5=(F−32)/9 to convert Centigrade to Fahrenheit.
Step 6 - Output: Display the temperature in Fahrenheit.
Step 7 - End
