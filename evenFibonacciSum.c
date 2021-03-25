#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fib1 = 1;
    int fib2 = 1;
    int t = 0;
    int n;

    printf("Enter the number n: ");
    scanf("%d", &n);

    while(1){
        int fib = fib1 + fib2;
        if(fib % 2 == 0){
            t += fib;
        }

        if(fib > n){
            printf("\nSum of all even fibonacci numbers less than %d: %d", n, t);
            break;
        }
        else{
            fib1 = fib2;
            fib2 = fib;
        }
    }
}
