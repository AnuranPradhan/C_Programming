#include <stdio.h>
// Checking the Palindrome of a number
int main() {
int n,reverse=0,remainder,original;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
original=n;
while(n!=0){
remainder=n%10;
reverse=reverse*10+remainder;
n=n/10;
}
if(original==reverse)
    printf("%d is a palindrome.\n", original);
else
    printf("%d is not a palindrome.\n", original);
    return 0;
}