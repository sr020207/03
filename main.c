#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   float x, y; 
   
   printf("���ڸ� �Է��ϼ��� : "); 
   scanf("%f", &x); 
   
   printf("�и� �Է��ϼ��� : "); 
   scanf("%f", &y); 
   
   //printf("%f\n", x); //Ȯ�ο� �ڵ� 
   //printf("%f\n", y); //Ȯ�ο� �ڵ� 
   
   printf("�������� ����� %f �Դϴ�.\n", x/y); 
   
   
   system("PAUSE");
   return 0;
}
