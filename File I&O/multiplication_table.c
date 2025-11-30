#include <stdio.h>

int main(){
    FILE *fptr;
    int num = 4;
    int i;

    fptr = fopen("table.txt", "w"); 
    if (fptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    for (i = 0; i < 10; i++){
        fprintf(fptr, "%d\n", num * (i + 1));
    }

    fclose(fptr);
    return 0;
}
