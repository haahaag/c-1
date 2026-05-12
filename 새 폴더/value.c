#include <stdio.h>
int main(void)
{
     int value; //입력한 정수 값
     int r_digit; //출력할 마지막 자릿수
     printf("정수를 5개 연속해서 입력하세요.\n");
     scanf("%d", &value);
     printf("\n 출력 결과는 >>> ");
     do
     {
        r_digit = value % 10;
        printf("%d", r_digit);
        value = value / 10;
     } while( value /* value != 0*/ );
     printf("\n");
     return 0;
}