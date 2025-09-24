#include <stdio.h>

int main() {
    printf("int: %d bytes\n", sizeof(int));
    printf("float: %d bytes\n", sizeof(float));
    printf("char: %d bytes\n", sizeof(char));
    printf("double: %d bytes\n", sizeof(double));
    printf("long: %d bytes\n", sizeof(long));
    return 0;
}