#include <stdio.h>
#include <string.h>

int main() {
    char c = 'a';
    char str[] = "madhav";
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == c){
            count++;
        }
    }

    printf("The character '%c' occurred %d times in the string \"%s\".\n", c, count, str);


    return 0;
}