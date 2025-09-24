#include <stdio.h>

int main() {
  int n,sum=0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("The sum of first %d natural numbers is: %d\n", n, sum);
    return 0;
}