#include <stdio.h>
int main(void)
{
    int i = 1;
    int n;
    int sum = 0;

    scanf("%d", &n);

    do
    {
        if(i % 2 != 0)
            sum += i;
        i++;
    } while(i <= n); 

    printf("%d", sum);
    return 0;
}