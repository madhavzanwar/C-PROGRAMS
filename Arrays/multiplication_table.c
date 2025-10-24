#include <stdio.h>

int main() {
    int arr[3][10];
    int mul[] = {2,7,9};

    for(int i = 0; i < 3; i++){
        printf("Multiplication table of %d:\n", mul[i]);
        for(int j = 0; j < 10; j++){
            arr[i][j] = mul[i] * (j + 1);
            printf("%d x %d = %d\n", mul[i], j+1, arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
