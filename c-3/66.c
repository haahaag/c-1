*program 2
#include <stdio.h>
void test_static(void);
int main(void)
{
    test_static();
    test_static();
    test_static();
    return 0;
}

void test_static(void)
{
     static int index = 10;
     printf("%d\n", index);
     index++;
}