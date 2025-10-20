//pointer is a variable that stores the address of another variable
#include <stdio.h>

int main() {
    int i = 73;
    int* j = &i;
    int k = 69;
     // pointer j stores the address of variable i
    printf("the address of i is %p\n", &i); // & is used to get the address of a variable)

    printf("the address of i is %p\n", j); // both will give same address

    printf("the value of i is %u\n", &k); // &k gives address of k
    
    printf("the value at address j is %d\n", *j); // * is used to get the value at the address stored in pointer
    
    return 0;
}

//how to declare pointer variable?
//int*j => here j is pointer to an integer variable
//float*p => here p is pointer to a float variable
//char*c => here c is pointer to a char variable 
