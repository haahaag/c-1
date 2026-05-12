#include <stdio.h>
int main(void)
{
     int i, j;
     for (i = 1; i <= 9; i++)
     {
       for (j = 9; j >= 0; j--)
       {
          if (j >= i) printf("%d", j);
          else putchar(' ');
        }
        putchar('\n');
     }
     return 0;
}