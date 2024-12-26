#include <stdio.h>
pi = 3.14159

int main() {
    float radius, area, circumference;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = pi * radius * radius;
    circumference = 2 * pi * radius;
    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);;
}

#Algorithm:
Step 1 - Start
Step 2 - Input: Prompt the user to enter the radius of the circle.
Step 3 - Calculate the area using the formula:
					A=π×r^2
Step 4 - Calculate the circumference using the formula:
					C=2×π×r
Step 5 - Output the area and circumference of the circle.
Step 6 - End
