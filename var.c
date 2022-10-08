#include<stdio.h>

int main(int argc, char const *argv[])
{
    //clarify var
    int a;
    static int b;
    int c = a + b;
    
    printf("%d\n", a);
   
    printf("%d\n", b);

    return 0;
}
