#include <stdio.h>
int main(){
//the memory location is contagious for all the elements of the array
    int marks [5]; //declaration of an array of 5 integers

    printf("Enter the marks of 5 students \n");
    scanf("%d %d %d %d %d", &marks[0], &marks[1], &marks[2], &marks[3], &marks[4]);

    printf("The address of marks[0] is %u \n", &marks[0]);
    printf("The address of marks[1] is %u \n", &marks[1]);
    printf("The address of marks[2] is %u \n", &marks[2]);
    printf("The address of marks[3] is %u \n", &marks[3]);
    printf("The address of marks[4] is %u \n", &marks[4]);

    return 0;
}