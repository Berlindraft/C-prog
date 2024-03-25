#include <stdio.h>

int main(){
const float PI = 3.14159;
float radius, area, circumference;

printf("Enter the radius of the circle:");
scanf("%f", &radius);

area = PI * radius * radius;
circumference = 2 * PI * radius;

/* these are which formulas in calculating the area
and circumference given that we input a radius and
a constant value of PI */

printf("Area of the circle: %.2f square units\n", area);
printf("Circumference of the circle: %.2f units\n", circumference);

    getch();
    return 0;
}
