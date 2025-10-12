#include <stdio.h>

int main()
{
   int a, b, c, d;
   printf("Enter the first number: ");
   scanf("%d", &a);
   
   printf("Enter the second number: ");
   scanf("%d", &b);
   
   printf("Enter the third number: ");
   scanf("%d", &c);
   
   printf("Enter the fourth number: ");
   scanf("%d", &d);
   
   if(a > b && a>c && a>d){
       printf("first number is the greatest");
    }
    
    else if(b > a && b>c && b>d){
        printf("second number is the greatest");
    }
    else if(c > a && c>b,c>d){
        printf("third number is the greatest");
    }
    else {
        printf("fourth number is greatest");
    }

    return 0;
}