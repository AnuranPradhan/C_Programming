#include <stdio.h>
//Checking if a number is power of two
int main() {
int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
if(n>0 && (n & (n - 1)) == 0)
    printf("%d is a power of two.\n", n);
else
    printf("%d is not a power of two.\n", n);
    return 0;
}