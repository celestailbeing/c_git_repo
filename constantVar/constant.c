#include<stdio.h>

void say()
{
    static int count = 6;
    float a = 9.0f;
    int b = 8;

    printf("count=%d\n", count);
    printf("count addr =%x\n", &count);
    printf("a=%f\n", a);

}

int count = 10;

int main()
{
    printf("main count addr = %x", &count);
    say();

    return 0;
}
