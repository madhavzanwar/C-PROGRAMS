#include <stdio.h>
//check whether a number is divisible by 97 or not
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);  // <- this is how you take input
    printf("You entered: %d\n", num);
    if(num%97 == 0)
    {
        printf("the number is divisible by 97");
        
    }
    else
    {
        printf("the number is not divisible by 97");
        
    }

    return 0;
    
}