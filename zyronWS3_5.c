#include <stdio.h>

int main (){
int x, y;
x = y = 0;
printf("The comparison results is: %d\n", x == y);
//from a singular '=' changed to '==' because 'x' will be equal to the value set in 'y' if used in that fashion
//'==' will now return a boolean value
return 0;
}
