#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c = 1;
    int a = 1;
    int b = 100;
    int bkmk;
    while(1){
        int guess = (a+b)/2;
        printf("\nMy guess: %d is it right?\n", guess);
        printf("If greater: 1 \nIf smaller: -1 \nIf known: 0\n");
        scanf("%d", &bkmk);
        if(bkmk == 0){
            printf("I knew in %d steps!", c);
            break;
        }
        if(bkmk == 1){
            a = guess + 1;
            c += 1;
        }
        if(bkmk == -1){
            b = guess - 1;
            c += 1;
        }
    }
    return 0;
}
