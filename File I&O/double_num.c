#include <stdio.h>

int main() {
    FILE *ptr;
    int num;

    // Open number.txt in read mode
    ptr = fopen("int.txt", "r");
    if (ptr == NULL) {
        printf("Error: number.txt not found.\n");
        return 1;
    }

    // Check if reading succeeded
    if (fscanf(ptr, "%d", &num) != 1) {
        printf("Error: number.txt does not contain a valid integer.\n");
        fclose(ptr);
        return 1;
    }
    fclose(ptr);

    // Open int.txt in write mode
    ptr = fopen("int.txt", "w");
    if (ptr == NULL) {
        printf("Error: Could not create int.txt.\n");
        return 1;
    }

    // Write doubled number
    fprintf(ptr, "%d\n", num * 2);
    fclose(ptr);

    return 0;
}
