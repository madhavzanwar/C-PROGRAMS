#include<stdio.h>
int main(){
    int product=1, n=4; //product = 0 is wrong
    for(int i=1; i<=n; i++)
    {
        product *= i; 
        //product = product*i
    }
printf("The factorial is %d", product);
return 0;

}