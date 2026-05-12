#include<stdio.h>

int main(void)
{
       int count = 1, i;
       for(i = 1; i <= 100; i++) {
           if ( i%3 && i%5 && i%7 )
             printf("%3d ", i);
       }
       return 0;
}