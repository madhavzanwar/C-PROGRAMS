#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int *ptr = a; //pointing to the first element of the array
    
    printf("The element at ptr+2 is : %d\n", *(ptr + 2)); //accessing the third element using pointer arithmetic
    
}