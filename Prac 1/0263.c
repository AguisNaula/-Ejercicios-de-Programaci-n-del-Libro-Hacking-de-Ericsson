






#include <stdio.h>

int main() {
    int num = 42;
    int *ptr = &num;
    
    printf("Value: %d, Address: %p\n", *ptr, (void*)ptr);
    return 0;
}
