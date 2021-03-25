#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    for(int i = 10; i >= 0; i--){
        printf("Countdown %d\n",i);
        sleep(1);
    }
}
