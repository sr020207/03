#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   char c;
   
   printf("input a character : "); 
   scanf("%c", &c); 
    
 
   printf("the nect character of %c (%d) is (%d)\n", c, c, c+1, c+1);
   
   system("PAUSE");
   return 0;
}
