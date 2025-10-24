//que: write a program to creaste an array of 10 integers and store the multiplication of 5 in it and print the array elements
#include <stdio.h>

int main() {
    int arr[10];

    for (int i = 0; i < 10; i++) {
        arr[i] = 5 * (i + 1); //storing multiplication of 5
    }

    for(int i = 0; i < 10; i++){
        printf("the value of 5 X %d = %d\n", i+1, arr[i]);
        
    }

    



    
    return 0;
}



