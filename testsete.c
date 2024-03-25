#include <stdio.h>

int main(void){
int x, y, z;

printf("enter value for first number:");
scanf("%d", &x);
printf("enter value for second number:");
scanf("%d", &y);
printf("enter value for third number:");
scanf("%d", &z);


if(x > y){
    if(x > z){
        printf("%d is greatest", x);
    }else{
    printf("%d is greatest", z);
    }
}else if ( y > x){
    if (y > z){
        printf("%d is greatest", y);
    }else{
    printf("%d is greatest", z);
    }
}


return 0;
}
