#include <stdio.h>
// The Fibbonacci series is a series where the next term is the sum of the previous two terms. The first two terms of the Fibonacci sequence is 0 followed by 1.
int main() {
int n, t1 = 0, t2 = 1, nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for(int i=0;i<=n;i++){
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}