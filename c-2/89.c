#include <stdio.h>

int main(void) {
    int num1, num2, sum;

    printf("두 개의 정수를 입력하세요: ");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;

    printf("%d + %d = %d\n", num1, num2, sum);

    return 0;
}