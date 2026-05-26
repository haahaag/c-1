#include <stdio.h>

int max(int a, int b);

int main(void)
{
    int num1, num2, result;

    printf("두 정수 입력: ");
    scanf("%d %d", &num1, &num2);

    result = max(num1, num2);

    printf("더 큰 값은: %d\n", result);

    return 0;
}

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}