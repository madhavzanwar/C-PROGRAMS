#include <stdio.h>

int addition(int num1, int num2) //declare function
{
    int sum = num1 + num2;
    
    return sum;
}


int main()
{ 
    int num1, num2, mad;
    
    printf("enter first num: ");
    scanf("%d",&num1);
    printf("enter second num: ");
    scanf("%d",&num2);
    
    mad = addition(num1 , num2);
    
    printf("addition of number is:%d",mad);
    
    return 0;
}
