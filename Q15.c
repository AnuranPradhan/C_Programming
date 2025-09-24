#include <stdio.h>
//prime numbers in a range
int main() {
int start,end,flag;
    printf("Enter the starting and ending range: ");
    scanf("%d %d", &start, &end);
    printf("Prime numbers between %d and %d are:\n", start, end);
for(int i=start;i<=end;i++){
    if(i<2) continue;
    flag=0;
    for(int j=2;j<=i/2;j++){
        if(i%j==0){
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("%d, ", i);
}
        return 0;
}