#include <stdio.h>
int A(int b, int c);

int main(void) {
    int i, j;

    for (i = 0, j = 0; i <= 10; i++) {
        j = A(i, j);
    }

    return 0;
}

int A(int b, int c) {
   c = c + b;

    printf("The sum(0:%d) = %d\n", b, c);

    return c;
}