#include <stdio.h>
int main(){
    FILE *fptr; //Pointer to a file
    fptr = fopen("Madhav.txt", "r"); //Open file in read mode
    int num1, num2, num3;
    fscanf(fptr, "%d %d %d", &num1, &num2, &num3); //Read three integers from the file
    printf("The values are %d, %d, and %d\n", num1, num2, num3);
    fclose(fptr); //Close the file

    return 0;
}