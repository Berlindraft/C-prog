#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void operations(int num1, int num2)
{
    if (num1 >= 0 && num2 >= 0) {
        printf("+");
    } else if (num1 <= 0 && num2 >= 0) {
        printf("-");
    } else if (num1 >= 0 && num2 <= 0) {
        printf("-");
    } else if (num1 <= 0 && num2 <= 0) {
        printf("+");
    } else {
        printf("not a valid integer value");
    }
}

struct monomial
{
    int coef_a;
    int coef_e;
    char var1;
    char var2;
    char raise;
    int squared;
};

void first(int coef_a, char var1, int coef_e, char var2, struct monomial *results)
{
    int coef_first = coef_a * coef_e;

    if (var1 == ' ' || var1 == '\n') {
        var1 = ' ';
    }

    if (var2 == ' ' || var2 == '\n') {
        var2 = ' ';
    }

    int var_b = atoi(&var1);
    int var_f = atoi(&var2);

    if (var_b == 0) {
        results->coef_a = coef_e = 0 + coef_first;
        results->var1 = var2;
    } else if (var_f == 0) {
        results->coef_a = coef_e = 0 + coef_first;
        results->var1 = var1;
    } else if (var_b != var_f) {
        results->coef_a = coef_e = 0 + coef_first;
        results->var1 = var1;
        results->var2 = var2;
    } else if (var_b == var_f) {
        results->coef_a = coef_e = 0 + coef_first;
        results->var1 = var1;
        results->raise = '^';
        results->squared = 2;
    } else {
        printf("invalid");
    }
}

void print_first(struct monomial m)
{
    printf("%d", m.coef_a);
    printf("%c", m.var1);
    if (m.var2 != '\0') {
        printf("%c", m.var2);
    }
    if (m.raise != '\0' && m.squared != 0) {
        printf("%c", m.raise);
        printf("%d", m.squared);
    }
}

int main() {
    char string_ab[10];
    char string_ef[10];
    char string_a[5];
    char string_e[5];
    char b[5];
    char f[5];

    printf("Enter the first polynomial:");
    fgets(string_ab, sizeof(string_ab), stdin);
    string_ab[strlen(string_ab) - 1] = '\0';

    int int_a = 1;
    char char_b = ' ';

    if (sscanf(string_ab, "%d%c", &int_a, &char_b) == 1) {
        b[0] = char_b;
        b[1] = '\0';
    }

    printf("Enter the second polynomial:");
    fgets(string_ef, sizeof(string_ef), stdin);
    string_ef[strlen(string_ef) - 1] = '\0';

    int int_e = 1;
    char char_f = ' ';

    if (sscanf(string_ef, "%d%c", &int_e, &char_f) == 1) {
        f[0] = char_f;
        f[1] = '\0';
    }

    struct monomial results;
    first(int_a, b[0], int_e, f[0], &results);
    operations(int_a, int_e);
    print_first(results);
    return 0;
}
