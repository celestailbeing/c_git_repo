#include<stdio.h>


int a;
int b;
int add_two_num();

int main (void) {
    a = 2;
    b = 3;

    int result = add_two_num();
    printf("result: %d", result);
}