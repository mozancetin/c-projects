#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int t = 0;
    printf("Number: ");
    scanf("%d", &n);
    while(1){
        if(n > 0){
            t += n%10;
            n = (n - n%10) / 10;
        }
        else{
            printf("Sum of digits of a number: %d", t);
            break;
        }
    }
    return 0;
}
