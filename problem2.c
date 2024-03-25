#include <stdio.h>

int main(){
    float num1, num2, sum;

printf("Enter the first number:");
scanf("%f", &num1);

printf("Enter the second number:");
scanf("%f", &num2);

sum = num1 + num2;
printf("The sum is: %.1f",sum);

/*using the stored value in num1 and num2 to add both
numbers in the sum function then print */

    getch();
    return 0;
}
