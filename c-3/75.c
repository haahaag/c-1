#include <stdio.h>
#include <ctype.h>

int up_down_case(int c);

int main(void) {
    int c; 
    while((c = getchar()) != EOF) {
        c = up_down_case(c);
          printf("%c", c);
    }
     return 0;
}
int up_down_case(int c) {
    if (islower(c)) {         
        return toupper(c);    
    } 
    else if (isupper(c)) {   
        return tolower(c);  
    }
    else {
        return c;             
    }
}