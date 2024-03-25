#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

double H;
double W;
double D;
double volume;

printf("enter the height of the rectangular container:");
scanf("%lf", &H);
printf("enter the width of the rectangular container:");
scanf("%lf", &W);
printf("enter the depth of the rectangular container:");
scanf("%lf", &D);

volume = H * W * D;

printf("the volume of the water in the rectangular container is: %.2lf cubic meters", volume);


    return 0;
}