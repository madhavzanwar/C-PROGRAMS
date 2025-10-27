#include <stdio.h>
#include <string.h>

    struct employee
    {
    int code;
    float salary;
    char name[10];
    };

int main() {

    struct employee facebook[100]; // declaring an array of 100 employees
    // Assigning values to the first employee in the array

    //we can access data using :

    facebook[0].code = 100; // assigning code to first employee
    facebook[1].code = 77; // assigning code to second employee
    facebook[0].salary = 50000.50; // assigning salary to first employee
    facebook[1].salary = 60000.75; // assigning salary to second employee
    strcpy(facebook[0].name, "Madhav"); // assigning name to first employee
    strcpy(facebook[1].name, "Raju"); // assigning name to second employee

    printf("Employee 1:\nName: %s\nSalary: %.2f\nCode: %d\n\n", facebook[0].name, facebook[0].salary, facebook[0].code);
    // printing details of first employee
    printf("Employee 2:\nName: %s\nSalary: %.2f\nCode: %d\n", facebook[1].name, facebook[1].salary, facebook[1].code);
    // printing details of second employee


    return 0;
}