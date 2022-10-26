#include "stdio.h"

extern int count;

void use_extern(void) {
    printf("count = %d", count);
}