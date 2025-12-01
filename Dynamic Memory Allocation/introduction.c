#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *ptr;

    printf("Enter how many numbers you want to store: ");
    scanf("%d", &n);

    // allocate memory
    ptr = (int*) malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // taking input
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }

    // printing numbers
    printf("You entered: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }

    // free memory
    free(ptr);

    return 0;
}
