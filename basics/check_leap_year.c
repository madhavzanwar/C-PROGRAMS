#include <stdio.h>

int main()
{
    int year;
    printf("Enter year: \n");
    scanf("%d", &year);
    
    if(year%4 == 0 && year%100 != 0 || year % 400 == 0)
    {
        printf("this is a leap year ");
        
    }
    else
{
    printf("this is not aleap year");
}
    return 0;
}