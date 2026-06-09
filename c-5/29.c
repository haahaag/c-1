#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int sets;
    printf("Enter lotto set number : ");
    scanf("%d", &sets);
    int a[sets][6]; 
    srand(time(NULL));
    for(int i = 0; i < sets; i++) {       
        for(int j = 0; j < 6; j++) {      
            a[i][j] = rand() % 45 + 1; 
        }
    }
    for(int i = 0; i < sets; i++) {
        printf("set %d :", i + 1);
        for(int j = 0; j < 6; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n"); 
    }
    return 0;
}