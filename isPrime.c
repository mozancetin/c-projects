#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    int i = 2;
    printf("Number: ");
    scanf("%d", &n);

    while(1){
        if(n == 0 || n == 1 || n % 2 == 0){
            printf("This number is not prime");
            break;
        }
        else{
            if(n < pow(i, 2)){
                printf("This is a prime number");
                break;
            }

            if(n % i == 0){
                printf("This number is not prime");
                break;
            }
            else{
                if(i % 2 == 0){
                    i += 1;
                }
                else{
                    i += 2;
                }
            }
        }
    }
    return 0;
}