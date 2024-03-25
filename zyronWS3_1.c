#include <stdio.h>

int main(){
int x = 1, y = 3;

x += y;
printf("x += y = %d\n", x);

x = 1; // resets the value of x

x += -y;
printf("x += -y = %d\n", x);

x = 1;// resets the value of x

x -= y;
printf("x -= y = %d\n", x);

x = 1;// resets the value of x

x -= -y;
printf("x -= -y = %d\n", x);

x = 1;// resets the value of x

x *= y;
printf("x *= y = %d\n", x);

x = 1;// resets the value of x

x *= -y;
printf("x *= -y = %d\n", x);

x = 1;// resets the value of x

return 0;
}
