






#include <stdio.h>

int main() {
    int x = 10; // Global scope
    {
        int x = 20; // Local scope
        printf("Inner scope x = %d\n", x);
    }
    printf("Outer scope x = %d\n", x);
    return 0;
}