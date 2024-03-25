#include <stdio.h>

int main() {
    char x;

    for (x = 0; x != 'q' ? 1 : 0;) {
        printf("Enter a character: ");
        scanf(" %c", &x);

        if (x != 'q') {
            printf("Input:%c\n", x);
        } else {
            break;
        }
    }

    return 0;
}
