#include <stdio.h>
#include <math.h>

int main(void){
//prompt the user what area will be calculated
// pi R squared area of a circle
while(1){
float num1, num2, results;
int ch;
const float PI = 3.1415;

printf("******************\n");
printf("Find the area of:\n(Enter the number)\n1 - Triangle\n2 - Square\n3 - Circle\n4 - Rectangle\n5 - EXIT \n");
printf("******************\n");
scanf("%d", &ch);

switch(ch){
case 1:
    printf("Enter the Base:");
    scanf("%f", &num1);
    printf("Enter the Height:");
    scanf("%f", &num2);

results = (num1 * num2)/2;
    printf("The Area of the Triangle is:\t%0.2f\n", results);
break;
case 2:
    printf("Enter the one side:");
    scanf("%f", &num1);

results = num1 * num1;
    printf("The Area of the Square is:\t%0.2f\n", results);
break;
case 3:
    printf("Enter the Radius:");
    scanf("%f", &num1);

results = PI * (num1 * num1);
    printf("The Area of the Circle is:\t%0.2f\n", results);
break;
case 4:
    printf("Enter the Length:");
    scanf("%f", &num1);
    printf("Enter the Width:");
    scanf("%f", &num2);

results = num1 * num2;
    printf("The Area of the Rectangle is:\t%0.2f\n", results);
break;
case 5:
    printf("Exiting...");
    return 0;
default:
    printf("INVALID\n");
}
}
    return 0;
}
