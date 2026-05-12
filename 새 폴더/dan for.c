#include <stdio.h>

int main(void)
{
    int dan, i;

    printf("Enter your dan : ");
    scanf("%d", &dan);

    if (dan < 2 || dan > 9) {
        printf("2에서 9 사이의 숫자만 입력하세요.\n");
        return 1;
    }

    for (int d = dan; d <= dan; d++) 
    {
        for (i = 1; i <= 9; i++)
        {
            printf("%d * %d = %2d\n", d, i, d * i);
        }
    }

    return 0;
}