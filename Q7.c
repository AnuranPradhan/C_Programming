#include <stdio.h>
// Function to check if a number is prime
int main() {
 int n,flag=0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
for(int i=2;i<=n/2;i++){
    if(n%i==0){
        flag=1;
        break;
    }
}
if(flag==0 && n>1)
    printf("%d is a prime number.\n", n);
else
    printf("%d is not a prime number.\n", n);
    return 0;
}