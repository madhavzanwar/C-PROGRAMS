#include <stdio.h>

// Function to check even or odd
void evenorodd(int num) {
    if (num % 2 == 0) {
        printf("The number is even!");
    } else {
        printf("The number is odd!");
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    evenorodd(num);

    return 0;
}
