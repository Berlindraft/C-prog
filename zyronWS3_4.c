#include <stdio.h>

int main(){
int x = 1;

printf("x++ produces : %d\n", x++);
//prints x first then increments it
printf("Now x contains: %d\n", x);
// x is not incremented
x = 1; //resets the value of x
printf("x = x++ produces: %d\n", x = x++);
//returns the original value
printf("Now x contains: %d\n", x);
// x is still the original value

return 0;
}
