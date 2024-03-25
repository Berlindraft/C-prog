#include <stdio.h>
#include <math.h>

int main(void){
unsigned int x = 0x19A1;
float squared_x = sqrt(x);
printf("the non-negative value of the square root of 0x%X (decimal: %u) is:%0.2f\n", x, x, squared_x);
return 0;
}
