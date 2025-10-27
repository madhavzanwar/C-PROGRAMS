//structures in C language helps us to group different types of variables under a single name
#include <stdio.h>
#include <string.h>

struct employee

{
   int code; //this declaresa a new user data type named 'employee' with three members
    float salary; // each member can be of different data types
    char name[10]; // array of characters to store name
}; // structure definition ends with a semicolon ALWAYS

int main() {
    struct employee e1 , e2; // declaring two variables of type struct employee
    strcpy(e1.name, "Madhav"); // assigning values to members of e1
    e1.salary = 50000.50; // assigning salary to e1
    e1.code = 101; // assigning code to e1 

    strcpy(e2.name, "Raju"); // assigning values to members of e2
    e2.salary = 60000.75; // assigning salary to e2
    e2.code = 102; // assigning code to e2

    printf("Employee 1:\nName: %s\nSalary: %.2f\nCode: %d\n\n", e1.name, e1.salary, e1.code);
    // printing details of e1
    printf("Employee 2:\nName: %s\nSalary: %.2f\nCode: %d\n", e2.name, e2.salary, e2.code);
    // printing details of e2

    return 0;

}
