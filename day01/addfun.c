#include<stdio.h>

int add_two_num(){
    extern int a;
    extern int b;

    return a + b;
}