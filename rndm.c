#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char string_ab[20];

    printf("Enter the first polynomial:");
    fgets(string_ab, sizeof(string_ab), stdin);
    string_ab[strlen(string_ab) - 1] = '\0';

    int coefficient = 1; // Default coefficient is 1
    char variable = '\0'; // Default variable is not specified

    if (sscanf(string_ab, "%d%c", &coefficient, &variable) == 1) {
        if (isdigit(string_ab[0])) {
            coefficient = atoi(string_ab);
            variable = 'x'; // Assume 'x' as the variable
        } else {
            variable = string_ab[0];
        }
    }

    if (coefficient != 1 && variable != '\0') {
        printf("Coefficient: %d\n", coefficient);
        printf("Variable: %c\n", variable);
    } else if (coefficient != 1) {
        printf("Coefficient: %d\n", coefficient);
    } else if (variable != '\0') {
        printf("Variable: %c\n", variable);
    } else {
        printf("No coefficient or variable specified.\n");
    }

    return 0;
}
