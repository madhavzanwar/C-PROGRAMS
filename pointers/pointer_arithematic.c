#include <stdio.h>
int main() {
    int a = 5;
    int *ptr = &a;

    printf("The address of a is %u \n", &a);

    printf("The address of a is %u \n", ptr);

    ptr++; //pointer arithmetic
    printf("The value of ptr after increment is %u \n", ptr);
    return 0;
}
    
