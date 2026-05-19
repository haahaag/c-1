#include <stdio.h>

void A(int *a, int *b);
int add(int n1, int n2);
void B(int C, int D); 

int main(void) {
    int i_start, j_initial;
    int i, j;

    A(&i_start, &j_initial);

    j = j_initial; 

    for (i = i_start; i <= i_start + 10; i++) {
        j = add(j, i);

        B(i, j);
    }

    return 0;
}

void A(int *a, int *b) {
    printf("시작할 숫자와 초기 합계값을 입력하세요: ");
    scanf("%d %d", a, b);
}

int add(int n1, int n2) {
    return n1 + n2;
}

void B(int C, int D) {
    printf("The sum(0:%d) = %d\n", C, D);
}