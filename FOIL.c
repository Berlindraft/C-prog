#include <stdio.h>
#include <stdlib.h>

void operations(int num1, int num2)
{
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
	int coef;
	char var1;
	char var2;
	char raise;
	int squared;
	
};

void first(int a, char b, int e, char f, struct monomial *results)
{

int coef_first = a * e;
int var_b = atoi(&b);
int var_f = atoi(&f);


if (var_b == var_f){
 
 results->coef = 0 + coef_first;
 results->var1 = b;
 results->raise = '^';
 results->squared = 2;
 	
 /*   printf("%d", coef);
    printf("%c^2", b); */
}
else if (var_b != var_f)
{
results->coef = 0 + coef_first;
results->var1 = b;
results->var2 = f;
    
    /*printf("%d", coef);
    printf("%c%c", b, f);*/
}
else if (var_b == '/0')
{
 results->coef = 0 + coef_first;
 results->var1 = f;
    //printf("%d", f);
}
else if (var_f == '/0')
{
 results->coef = 0 + coef_first;
 results->var1 = b;  
    
    //printf("%d", b);
}
else {
    printf("invalid");
}
}

void print_first(struct monomial m)
{

    printf("%d", m.coef);
    printf("%c", m.var1);
    if (m.var2 != '\0') {
        printf("%c", m.var2);
    }
    if (m.raise != '\0') {
        printf("%c", m.raise);
    }
    if (m.squared != 0) {
        printf("%d", m.squared);
    }

}
/*

void outer(int a, int g, char b, char h){
int coef = a * g;
int var_b = atoi(&b);
int var_h = atoi(&h);
if (var_b == var_h){
    printf("%d", coef);
    printf("%c^2", b);
}
else if (var_b != var_f)
{
    printf("%d", coef);
    printf("%c%c", b, h);
}
else if (var_b == 0)
{
    printf("%d", h);
}
else if (var_f == 0)
{
    printf("%d", b);
}
else {
    printf("invalid");
}
}

void inner(int c, int e, char e, char f){
int inner_num = c * e;
int num_c = atoi(&c);
int num_f = atoi(&f);
if (num_c == num_f){
    printf("%d", inner_num);
    printf("%c^2", b);
}
else if (num_c != num_f)
{
    printf("%d", inner_num);
    printf("%c%c", c, f);
}
else if (num_c == 0)
{
    printf("%d", f);
}
else if (num_f == 0)
{
    printf("%d", c);
}
else {
    printf("invalid");
}
}

void mid(){

}

*/
void last(int c, char d, int g, char h)
{
    
int last_num = c * g;
int num_d = atoi(&d);
int num_h = atoi(&h);

struct monomial m1;
struct monomial m2;
struct monomial m3;
struct monomial m4;

if (num_d == num_h){
 m1.coef = 0 + coef_first;
 m1.var1 = b;
 m1.raise = '^';
 m1.squared = 2;
 	
 /*   printf("%d", coef);
    printf("%c^2", b); */
}
else if (num_d != num_h)
{
m2.coef = 0 + coef_first;
m2.var1 = b;
m2.var2 = f;
    
    /*printf("%d", coef);
    printf("%c%c", b, f);*/
}
else if (num_d == 0)
{
m3.coef = 0 + coef_first;
m3.var1 = f;
    //printf("%d", f);
}
else if (num_h == 0)
{
 m4.coef = 0 + coef_first;
 m4.var1 = b;  
    
    //printf("%d", b);
}
else {
    printf("invalid");
}
}
void print_last (struct monomial m)
{

    printf("%d", m.coef);
    printf("%c", m.var1);
    if (m.var2 != '\0') {
        printf("%c", m.var2);
    }
    if (m.raise != '\0') {
        printf("%c", m.raise);
    }
    if (m.squared != 0) {
        printf("%d", m.squared);
    }

}


int main (){
//int a, c, e, g;
//char b, d, f, h;
int a = 2;
int e = 3;
char b = 'x';
char f = 'y';

struct monomial results;

print_first(a,b,e,f, &results);
print_first(results);
    return 0;
}

/*
b=b & d=d       b^2     d^2
if b=d  2b^2
else b^2d^2
    f=f         b^2     f^2
if b=f  2b^2
else b^2f^2
    d!=d        b^2     df
if b=d || b=f   
    d=0         b^2     f
    f=0         b^2     d
h=h & d=d       h^2     d^2
    f=f         h^2     f^2
    d!=d        h^2     df
    d=0         h^2     f
    f=0         h^2     d
b!=b & d=d      bh      d^2
    f=f         bh      f^2
    d!=d        bh      df
    d=0         bh      f
    f=0         bh      d
b=0 & d=d       h       d^2
    f=f         h       f^2
    d!=d        h       df
    d=0         h       f
    f=0         h       d
h=0 & d=d       b       d^2
    f=f         b       f^2
    d!=d        b       df
    d=0         b       f
    f=0         b       d
*/

