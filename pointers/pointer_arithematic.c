#include <stdio.h>
int main() {
    int a = 5;
    int *ptr = &a;

    printf("The address of a is %u \n", &a);

    printf("The address of a is %u \n", ptr);

    ptr++; //pointer arithmetic
    printf("The value of ptr after increment is %u \n", ptr);

    
    return 0;


    //if there is char instead of int then the pointer will increase by 1 byte
    //but for now it is int so it will increase by 4 bytes.
}
    
