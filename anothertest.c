#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

char operation;
double num1;
double num2;
double total;

printf("what operation to use? (+, -, *, /)");
scanf("%c", &operation);

printf("enter the first number:");
scanf("%lf", &num1);

printf("enter the second number:");
scanf("%lf", &num2);
    
switch(operation){
case '+':
total = num1 + num2;
printf("Answer: %lf", total);
break;

case '-':
total = num1 - num2;
printf("Answer: %lf", total);
break;

case '*':
total = num1 * num2;
printf("Answer: %lf", total);
break;

case '/':
if( num2 == 0){
printf("you cannot divide by zero");
}
else{
total = num1 / num2;
printf("Answer: %lf", total);
break;
}

default : printf("\nbogoa tarunga kuno nag basa");
break;
}
    return 0;
}
