#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

char* itoa(int val){

    static char buf[128] = {0};

    int i = 126;

    for(; val && i ; --i, val /= 10)

        buf[i] = val % 10 + '0';

    char* result = &buf[i+1];
    return result;

}
