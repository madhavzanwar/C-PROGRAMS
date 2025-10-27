#include <stdio.h>
#include <string.h>

int main() {
    char c = 'a';
    int contains = 0;
    char str[] = "madhav";

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == c){
           contains = 1;
              break; // exit loop if character is found
        }
    }

    if (contains) {
        printf("The character '%c' is present in the string \"%s\".\n", c, str);
    } else {
        printf("The character '%c' is not present in the string \"%s\".\n", c, str);
    }

    return 0;
}