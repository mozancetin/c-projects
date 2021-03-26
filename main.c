#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int myRandomFunc(int lower, int upper){
    int num;
    srand(time(NULL));
    num = (rand() % (upper - lower)) + lower;
    return num;
}

int main()
{
    int n = myRandomFunc(1, 100);
    int c = 1;
    while(1){
        int guess;
        printf("I select a number from my processor, guess what number: ");
        scanf("%d", &guess);
        if(guess == n){
            printf("\nNumber: %d\n", n);
            printf("Congrats! You find it in %d steps\n", c);
            break;
        }
        else if(guess > n){
            printf("\nYou should say a smaller number\n");
            c += 1;
        }
        else{
            printf("\nYou should say a bigger number\n");
            c += 1;
        }
    }
    return 0;
}
