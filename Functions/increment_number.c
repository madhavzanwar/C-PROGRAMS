#include <stdio.h>


int var;
int increment(){
    var = var + 1;
    return var;
}

int main()
{
    int num,inc;
    printf("enter a number: ");
    scanf("%d",&num);
    
    var = num;   // initialize global variable with input
    
    inc = increment();   // call increment function
    
    printf("Incremented value = %d\n", inc);

    return 0;
}
