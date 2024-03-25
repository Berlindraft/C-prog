#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


void operations(char str_a, char str_e)
{
    int num1 = atoi(str_a);
    int num2 = atoi(str_e);

if (num1 >= 0 && num2 >= 0){
printf("+");
}
else if (num1 <= 0 && num2 >= 0){
printf("-");
}
else if (num1 >= 0 && num2 <= 0){
printf("-");
}
else if (num1 <= 0 && num2 <= 0){
printf("+");
}
else
{
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

void first(char string_a[], char b, char string_e[],  char f, struct monomial *results)
{

int coef_a = atoi(string_a);
int coef_e = atoi(string_e);
int coef_first = coef_a * coef_e;

    if (b == ' ' ||b == '\n') 
    {
        b = ' ';
    }

    if (f ==  ' '||f == '\n') 
    {
        f = ' ';
    }

    int var_b = atoi(&b);
    int var_f = atoi(&f);

if (var_b == 0)
{
 results->coef_a = coef_e = 0 + coef_first;
 results->var1 = f;
}
else if (var_f == 0)
{
 results->coef_a = coef_e = 0 + coef_first;
 results->var1 = b;  
}
else if (var_b != var_f)
{
results->coef_a = coef_e = 0 + coef_first;
results->var1 = b;
results->var2 = f;
}
else if (var_b == var_f){
 
 results->coef_a = coef_e = 0 + coef_first;
 results->var1 = b;
 results->raise = '^';
 results->squared = 2;
}
else {
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
    if (m.raise != '\0' && m.squared != '/0') {
        printf("%c", m.raise);
    }

}

int main (){

char string_ab[10];
char string_ef[10];
char string_a[5];
char string_e[5];
char b[5];
char f[5];


printf("enter the first polynomial:");
fgets(string_ab, sizeof(string_ab), stdin);
string_ab[strlen(string_ab)-1]= '\0';

int string_a = 1;
char b = 0;

    if (sscanf(string_ab, "%d%c", &string_a, &b) == 1) 
    {
        var_b = x;
    }

printf("enter the second polynomial:");
fgets(string_ef, sizeof(string_ef), stdin);
string_ef[strlen(string_ef)-1] = '\0';

int string_a = 1;
char b = 0;

    if (sscanf(string_af, "%d%c", &string_e, &f) == 1) 
    {
        var_f = *f;
    }


struct monomial results;
first(string_a, b, string_e, f, &results);
operations(string_a, string_e);
print_first(results);
    return 0;
}