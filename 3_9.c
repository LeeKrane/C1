#include<stdio.h>

int main(void) {
    signed char sc = 0x7F;
    unsigned char uc = 0xFF;
    signed short ss = 0x7FFF;
    unsigned short us = 0xFFFF;
    signed long sl = 0x7FFFFFFF;
    unsigned long ul = 0xFFFFFFFF;

    printf("singed cahr = %d\nunsigned char = %d\nsigned short = %d\nunsigned short = %u\nsigned long = %ld\nunsigned long = %lu\n", sc, uc, ss, us, sl, ul);

    return 0;
}
