//use the same approach as we did in printing 5 table
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[10];

    for (int i = 0; i < 10; i++) {
        arr[i] = n * (i + 1); //storing multiplication of n
    }

    for(int i = 0; i < 10; i++){
        printf("the value of %d X %d = %d\n", n, i+1, arr[i]);

    }

    return 0;

}