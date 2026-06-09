#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int a[6];    
    srand(time(NULL)); 
    for (int i = 0; i < 6; i+=1)
        a[i] = rand() % 45 + 1; 
    printf("로또 번호: ");
    for (int i = 0; i < 6; i+=1)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}