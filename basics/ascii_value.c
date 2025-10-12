
//remembering ascii value

#include <stdio.h>


int main()
{
//   https://en.cppreference.com/w/c/language/ascii.html
// Rule:
// Single quotes 'a' → character → ASCII value works correctly.
// Double quotes "a" → string → pointer → printing as int gives random number.
    
    char ch = 'M';
    printf("The character is %c \n" , ch);
    printf("The value of charater is %d \n" , ch);
    // 97 to 122 is lower case
    if (ch >= 97 && ch <= 122){
        printf("The character entered is a lower case character. \n");

    }
    else {
        printf("The character entered is a not lower case character.\n");
    }
    return 0;
}
