#include <stdio.h>
#include <string.h>

int main() {

    //whats string functions?
    //string functions are built-in functions in C that are used to manipulate and handle strings.

    //strlen - to find length of string
    char str1[] = "Hello, World!";
    printf("Length of str1: %lu\n", strlen(str1));

    //strcpy - to copy one string to another
    char str2[50];
    strcpy(str2, str1);
    printf("Copied string: %s\n", str2);

    //strcat - to concatenate two strings (concatenate means to join two strings)
    char str3[50] = "Madhav";
    char str4[] = " Zanwar";
    strcat(str3, str4); 
    printf("Concatenated string: %s\n", str3);
    

    //strcmp - to compare two strings
    char str5[] = "apple";  
    char str6[] = "banana";
    int result = strcmp(str5, str6);
    if(result < 0) {
        printf("str5 is less than str6\n");
    } else if(result > 0) {
        printf("str5 is greater than str6\n");
    } else {
        printf("str5 is equal to str6\n");
    }
    
    
    return 0;
}