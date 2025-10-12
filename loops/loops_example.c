#include <stdio.h>

int main()
{
   int i = 0;
   while(i<=20)   // removed semicolon ❌
  {
      if(i>=10){
          printf("The value of i is %d \n", i);
        
      }
      i++;
      
  }

    return 0;
}