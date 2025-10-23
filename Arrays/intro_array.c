#include <stdio.h>
int main() {
    // An array is a collection of items stored at contiguous memory locations.
    // It is used to store multiple values of the same type in a single variable.
int marks [5]; //declaration of an array of 5 integers

printf("Enter the marks of 5 students \n");
scanf("%d %d %d %d %d", &marks[0], &marks[1], &marks[2], &marks[3], &marks[4]);


//we can go all the way till marks [89]

printf("Marks 0 and marks 1 are %d and %d\n", marks[0], marks[1]);
    return 0;
}