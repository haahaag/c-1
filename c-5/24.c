#include <stdio.h>
int main(void)
{
    int i;
    char str1[]="Hello";
    char str2[]={'H', 'e', 'l', 'l', 'o'};
    printf("%d %d\n", sizeof(str1), sizeof(str2));
    printf("%s\n", str1;);
    for(i = 0; i < sizeof(str1); i++)
        printf("%c", str2[i]);
    return 0;
}