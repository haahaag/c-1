#include <stdio.h>
int main(void)
{
    int dan, i;
    printf("Enter your dan : ");
    scanf("%d", &dan);

    if (dan < 2 || dan > 9) {
        printf("2에서 9 사이만 입력.\n");
        return 1;
    }

    int d = dan; 
    while (d <= dan)
    {
        i = 1; 
        while (i <= 9)
        {
            printf("%d * %d = %2d\n", d, i, d * i);
            i++; 
        }
        d++; 
    }
    return 0;
}