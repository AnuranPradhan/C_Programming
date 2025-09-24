#include <stdio.h>
//GCD and LCM of two numbers
int main() {
int a,b,gcd,lcm,temp;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    int x,y;
    x=a;
    y=b;
while(y!=0){
    temp=y;
    y=x%y;
    x=temp;
}
gcd=x;
lcm=(a*b)/gcd;
    printf("GCD of %d and %d is %d\n", a,b,gcd);
    printf("LCM of %d and %d is %d\n", a,b,lcm);

    return 0;
}