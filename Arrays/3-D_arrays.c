#include <stdio.h>

int main() {
    //3D arrays are arrays of 2D arrays, meaning each element of a 3D array is itself a 2D array.
    int arr[2][3][4];
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 4; k++){
                printf("%u ", &arr[i][j][k]);
            }
        }
    }
    return 0;
}