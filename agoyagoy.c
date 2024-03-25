#include <stdio.h>

int main(void){

/*
input: numbers from 1-10
output: prints the text form of the number
example: 1 = ONE

*/
int ch;

while(1){

    printf("Enter a number from 1-10: \t");
    scanf("%d", &ch);

switch(ch){
 case 1:
     printf("ONE\n");
     break;
 case 2:
     printf("TWO\n");
     break;
 case 3:
     printf("THREE\n");
     break;
 case 4:
     printf("FOUR\n");
     break;
 case 5:
     printf("FIVE\n");
     break;
 case 6:
     printf("SIX\n");
     break;
 case 7:
     printf("SEVEN\n");
     break;
 case 8:
     printf("EIGHT\n");
     break;
 case 9:
     printf("NINE\n");
     break;
 case 10:
     printf("TEN\n");
     break;
 case 0:
         printf("INVALID NUMBER\n");
         return 0;
 default:
        printf("INVALID NUMBER\n");

}
}
    return 0;
}
