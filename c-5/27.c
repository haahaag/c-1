#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    srand(time(NULL)); 
    for(int i = 0; i < 5; i+=1) 
        printf("%d\n", rand() % 100 ); 
    return 0;
}
