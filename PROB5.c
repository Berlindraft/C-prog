#include <stdio.h>

int main(){
float num1, num2, add, sub, mult, div;

printf("Enter the first number:");
scanf("%f", &num1);
printf("Enter the second number:");
scanf("%f", &num2);
// this computes the value two numbers in 4 operations
add = num1 + num2;
sub = num1 - num2;
mult = num1 * num2;
div = num1 / num2;
printf("sum:\t\t%0.2f \ndifference:\t%0.2f \nproduct:\t%0.2f \nquotient:\t%0.2f", add, sub, mult, div);

    getch();
    return 0;
}
