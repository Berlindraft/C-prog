#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


void operations(int num1, int num2)
{

if (num1 >= 0 && num2 >= 0){
printf("+");
}
else if (num1 <= 0 && num2 >= 0){
printf("-");
}
else if (num1 >= 0 && num2 <= 0){
printf("-");
}
else if (num1 <= 0 && num2 <= 0){
printf("+");
}
else
{
printf("not a valid integer value");
}
}

int main (){
operations(4, 5);


    return 0;
}