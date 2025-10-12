#include <stdio.h>
//using ternary operators :)
int main()
{
int number1;
int number2;


// condition ? expression-it-true : expression-it-false
printf("enter 1st number: \n");
scanf("%d",&number1);
printf("enter 2nd number: \n");
scanf("%d",&number2);

number1>number2? printf("number1 is greater"):printf("number2 is greater");


    return 0;
}
