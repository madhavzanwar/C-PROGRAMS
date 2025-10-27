#include <stdio.h>
#include <string.h>

    struct employee
    {
    int code;
    float salary;
    char name[10];
    };



    int main() {
    struct employee e1;

    printf("Enter employee code: ");
    scanf("%d", &e1.code);
    printf("Enter employee salary: ");
    scanf("%f", &e1.salary);
    printf("Enter employee name: ");
    scanf("%s", e1.name);

    printf("\nEmployee Details:\n");
    printf("Code: %d\n", e1.code);
    printf("Salary: %.2f\n", e1.salary);
    printf("Name: %s\n", e1.name);

    return 0;
}