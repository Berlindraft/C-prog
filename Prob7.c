#include <stdio.h>

int main(){

int Height = 2;
int Width = 4;
int Depth = 3;
int Volume;

printf("The height of the water tank is:\t%d\n", Height);

printf("The width of the water tank is: \t%d\n", Width);

printf("The depth of the water tank is: \t%d\n", Depth);
 /* given that we already have the values, we assign them to
  variables and executing the formula to get the expected output */
Volume = Height * Width * Depth;

printf("the volume of the water in the rectangular container is: %d cubic meters", Volume);


    return 0;
}
