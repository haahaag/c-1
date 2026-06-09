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
            int temp = rand() % 45 + 1; 
            int is_duplicate = 0; 
            for(int k = 0; k < j; k++) {
                if(a[i][k] == temp) {
                    is_duplicate = 1; 
                    break; 
                }
            }            
            if(is_duplicate == 1) {
                j--; 
            } 
            else {
               a[i][j] = temp; 
            }
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