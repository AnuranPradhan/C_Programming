#include <stdio.h>

int main() {
    float heigth;
    float base;


    printf("Enter the length: ");


    scanf("%f", &heigth);

printf("Enter the base: ");


    scanf("%f", &base);
    printf("The Area of the triangle is: %f \n", (heigth*base)/2);

    return 0; 
}