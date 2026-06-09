#include <stdio.h>
#define     N     10

int main(void)
{
    int   a[N];
    int   b[N][N];
    
    printf("%d\n", sizeof(a[N-1]));
    printf("%d\n", sizeof(a));
    printf("%d\n", sizeof(b[N-1][N-1]));
    printf("%d\n", sizeof(b[N-1]));
    printf("%d\n", sizeof(b));
    return 0;
}