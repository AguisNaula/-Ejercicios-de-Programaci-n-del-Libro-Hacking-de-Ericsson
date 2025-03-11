






#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "World";
    char result[20];
    
    strcpy(result, str1);
    strcat(result, " ");
    strcat(result, str2);
    
    printf("Concatenated string: %s\n", result);
    return 0;
}