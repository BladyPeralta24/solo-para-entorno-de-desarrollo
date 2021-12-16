// main.c
#include<stdio.h>
#include"add.h"
#include"sub.h"
#include"mul.h"
#include"div.h"
int main(){
    int a = 10;
    int b = 20;
    printf("add(%d,%d)=%d\n", a, b, add(a,b));
    a = 100;
    b = 20;
    printf("sub(%d,%d)=%d\n", a, b, sub(a,b));
    int a = 35;
    int b = 29;
    printf("mul(%d,%d)=%d\n", a, b, mul(a,b));
    int a = 160;
    int b = 2;
    printf("div(%d,%d)=%d\n", a, b, div(a,b));
    return 0;
}