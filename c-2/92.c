#include <stdio.h>

void lte(int a, int b, int sum);

int main(void) {
    int num1, num2, sum;
    printf("두 개의 정수를 입력하세요: ");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;
    lte(num1, num2, sum);

    return 0;
}
void lte(int a, int b, int sum) {
    printf("%d + %d = %d\n", a, b, sum);
}