#include<stdio.h>

typedef struct complex_num
{
    float real;
    float imag;
} ComplexNum;

//typedef is a command that allows us to create to new data type names
//Here we are creating a new data type name 'ComplexNum' for struct complex_num

int main(){
    ComplexNum c = {6 ,9.5};
    printf("The value of vector is %.2f + %.2fi\n", c.real, c.imag);
    return 0;
}