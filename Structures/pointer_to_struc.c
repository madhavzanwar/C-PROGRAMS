#include<stdio.h>

int main(){
    struct employee
    {
        int code;
        float salary;
        char name[10];

    };

    {

    struct employee e1;
    struct employee *ptr;
    ptr = &e1;

    //now we can print structure elemenrs using pointer variable

    (*ptr).code = 100; // assigning value to code using pointer
    (*ptr).salary = 50000.50; // assigning value to salary using pointer
    //for name we will use strcpy function from string.h
    strcpy((*ptr).name, "Madhav"); // assigning name using pointer  

  
    printf("Employee Details:\nName: %s\nSalary: %.2f\nCode: %d\n", (*ptr).name, (*ptr).salary, (*ptr).code);
    return 0;
   
    }
    
}