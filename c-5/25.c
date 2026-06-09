#include <stdio.h>
int main(void)
{
    int key, i;
    int list[5]={1, 2, 3, 4, 5};
    for (i = 0; i < 5; i++)
        printf("%d ", list[i]);
    printf("\nInput a key value : ");
    scanf("%d", &key);
    for(i = 0; i < 5; i++)
        if(list[i] == key)
            printf("Find the key at %d of the list array\n", i + 1);
    printf("End\n");
    return 0;
}