#include <stdio.h>
int main(void)
{
    int n, key, i;
    printf("Input size of the list : ");
    scanf("%d", &n);
    int list[n]; 
    printf("Input %d values of the list : ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &list[i]);
    }
    for (i = 0; i < n; i++) {
        printf("%d ", list[i]);
    }
    printf("\nInput a key value : ");
    scanf("%d", &key);
    for (i = 0; i < n; i++) {
        if (list[i] == key) {
            printf("Find the key at %d of the list array\n", i + 1);
        }
    }   
    printf("End\n");
    return 0;
}