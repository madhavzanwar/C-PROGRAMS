#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "ij!J!bn!Nbeibw"; //encrypted string (each character shifted by 1)
    //simple decryption by shifting each character back by 1

    for(int i = 0; str[i] != '\0'; i++){
        str[i] = str[i] - 1;
    }

    printf("Decrypted string: %s\n", str);
    
    return 0;
}