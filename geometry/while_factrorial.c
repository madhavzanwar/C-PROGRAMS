#include<stdio.h>
int main(){
//by using while loop
int i = 1;
int product=1;
int n=5;
while (i<=n)
{
   product *= i;
   i++;
}
printf("The factorial of %d is %d",n ,product);

return 0;
}