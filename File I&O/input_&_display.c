#include <stdio.h>

int main() {
    FILE *ptr;            // Pointer to a file
    char name1[13], name2[13];
    int salary1, salary2;

    // Open file in write mode (create or overwrite)
    ptr = fopen("Madhav.txt", "w");
    if (ptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Take input from user
    printf("Enter the name of Employee 1: \n");
    scanf("%12s", name1);

    printf("Enter the salary of Employee 1: \n");
    scanf("%d", &salary1);

    printf("Enter the name of Employee 2: \n");
    scanf("%12s", name2);

    printf("Enter the salary of Employee 2: \n");
    scanf("%d", &salary2);

    // Write data to the file
    fprintf(ptr, "%s %d\n", name1, salary1);
    fprintf(ptr, "%s %d\n", name2, salary2);

    fclose(ptr);  // Close the file
    return 0;
}



    