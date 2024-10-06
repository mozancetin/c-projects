#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    // can be done as 
    for( int t = 10; t >= 0; t--)
    {
        printf ("Countdown %d\n", t);
        sleep(1);
    }
    
    return 0;
}
