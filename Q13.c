#include <stdio.h>
//Reverse a number
int main() {
int n,remainder,reverse=0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
while(n!=0){
    remainder=n%10;
    reverse=reverse*10+remainder;
    n=n/10;
}
    printf("Reversed Number: %d\n", reverse);
    return 0;
}