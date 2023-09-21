#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   float x, y; 
   
   printf("분자를 입력하세요 : "); 
   scanf("%f", &x); 
   
   printf("분모를 입력하세요 : "); 
   scanf("%f", &y); 
   
   //printf("%f\n", x); //확인용 코드 
   //printf("%f\n", y); //확인용 코드 
   
   printf("나누기의 결과는 %f 입니다.\n", x/y); 
   
   
   system("PAUSE");
   return 0;
}
