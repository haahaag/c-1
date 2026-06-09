#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
int main(void)
{
    srand(time(NULL)); 
    for(int i=1; i<=5; i+=1)
        printf("%d\n", rand());
    return 0;
}