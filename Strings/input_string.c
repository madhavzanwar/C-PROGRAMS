#include <stdio.h>

int main() {
    char str[6];
    

    for(int i = 0; i < 6; i++){
        scanf("%c", &str[i]);
        fflush(stdin); // to clear the input buffer
    }
    str[6] = '\0'; // null terminator to mark the end of the string
    printf("The input string is: %s\n", str);
    return 0;
}