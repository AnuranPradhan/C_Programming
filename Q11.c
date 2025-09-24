#include <stdio.h>
#include <math.h>
// Roots of a quadratic equation
int main() {
int a,b,c,d,root1,root2;
    printf("Enter coefficients a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);
d=b*b-4*a*c;
if(d>0){
    root1=(-b+sqrt(d))/(2*a);
    root2=(-b-sqrt(d))/(2*a);
    printf("Roots are real and different.\n");
    printf("Root 1 = %d\nRoot 2 = %d\n", root1,root2);
}
else if(d==0){
    root1=root2=-b/(2*a);
    printf("Roots are real and same.\n");
    printf("Root 1 = Root 2 = %d\n", root1);
}
else{
    printf("Roots are complex and different.\n");
}
    return 0;
}