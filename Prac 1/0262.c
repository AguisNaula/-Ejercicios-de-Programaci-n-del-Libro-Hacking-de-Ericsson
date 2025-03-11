






#include <stdio.h>

int main() {
    short s = 32767;
    unsigned short us = 65535;
    long l = 2147483647;
    unsigned long ul = 4294967295;
    
    printf("Short: %d, Unsigned Short: %u\n", s, us);
    printf("Long: %ld, Unsigned Long: %lu\n", l, ul);
    return 0;
}
