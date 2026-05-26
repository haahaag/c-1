
#include <stdio.h>
int a=10;
int main(void)
{
    extern int a;
    printf("%d\n", a);
    return 0;
}