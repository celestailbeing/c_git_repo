#include<stdio.h>


int count = 2;
extern void use_extern();

int main(void) {

    use_extern();

    return 0;
}