#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "hi I am Madhav";
    //simple encryption by shifting each character by 1

    for(int i = 0; str[i] != '\0'; i++){
        str[i] = str[i] + 1;
    }

    printf("Encrypted string: %s\n", str);
    
    return 0;
}