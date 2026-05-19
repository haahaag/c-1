#include <stdio.h>

int add(int n1, int n2);

int main(void) {
    int num1, num2, sum;

    printf("두 개의 정수를 입력하세요: ");
    scanf("%d %d", &num1, &num2);

    sum = add(num1, num2);

    printf("%d + %d = %d\n", num1, num2, sum);

    return 0;
}

int add(int n1, int n2) {
    return n1 + n2;
}