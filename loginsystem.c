#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(void){
int i = 0;
char username[100], password[100];
char ch;


printf("\n---------------------------");
printf("\nLOGIN SYSTEM");
printf("\n---------------------------");
printf("\nEnter a username:");
gets(username);


    printf("Enter password: ");
    while (1) {
        ch = getch();
        if (ch == 13) {
            password[i] = '\0';
            break;
        } else {
            password[i] = ch;
            i++;
            printf("*");
        }
    }

    if (strcmp(username, "Zyron") == 0) {
        if (strcmp(password, "1234") == 0) {
            printf("\nLogin Success...");
            printf("\nWelcome %s", username);
        } else {
            printf("\nInvalid Password...");
        }
    } else {
        printf("\nInvalid Username...");
    }

    return 0;
}
