#include <stdio.h>

int main (){

char name[30], gender[20], address[20], choices;
int age;
char num[5];
int size = (int *)malloc(size * sizeof(int));

    if (num == NULL) {
        printf("no mem.\n");
        return 1;
    }

    for (size_t i = 0; i < size; ++i) {
        num[i] = i * 10;
    }


printf("ENTER A NAME:\n");
scanf("%s", &name);
printf("ENTER A AGE:\n");
scanf("%d", &age);
printf("ENTER A GENDER:\n");
scanf("%s", &gender);
printf("ENTER A ADDRESS:\n");
scanf("%s", &address);
do {
printf("WHAT DO YOU WAnT TO DISPLAY?\n");
printf("1.name\n2.age\n3.gender\n4.address\n5.exit\n");
scanf("%d", &choices);


switch(choices){
case 1:
printf("Name: %s\n", name);
break;
case 2:
printf("Age: %d\n", age);
break;
case 3:
printf("Gender: %s\n", gender);
break;
case 4:
printf("Address: %s\n", address);
break;
case 5:
break;
default:
printf("invalid");
break;
}
} while (choices != 5);

free(num);
    return 0;
}
