#include <stdio.h>

int main(){

float base, height, hypotenuse;

printf("Enter the base:");
scanf("%f", &base);
printf("Enter the height:");
scanf("%f", &height);

/* using the formula of Pythagorean theorem
given the base and height, we can calculate the hypotenuse */

hypotenuse = sqrt((base*base) + (height*height));
printf("Hypotenuse: %f", hypotenuse);

    getch();
    return 0;
}
