#include <stdio.h>
int main() {
    int cgpa[3] = {8, 9, 7}; //declaration and initialization of an array
    for (int i =0; i < 3; i++){
        printf("The value of array at index %d is %d\n", i, cgpa[i]);
    }
    return 0;
}