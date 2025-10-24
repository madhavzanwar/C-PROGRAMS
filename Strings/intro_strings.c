#include <stdio.h>

int main() {
    //strings are arrays of characters ending with a null character '\0'

char st[] = { 'a', 'b', 'c', 'd', '\0' }; //declaration of a string

// char st[] = "abcd"; //another way to declare a string
// '\0' is used to indicate the end of the string, its called a null character

printf("First character: %c\n", st[0]);
printf("Second character: %c\n", st[1]);
printf("Third character: %c\n", st[2]);
printf("Fourth character: %c\n", st[3]);
printf("Fifth character (null terminator): %c\n", st[4]);

//printf("%s", st); //to print the whole string its a lot more convenient
//here we will not use & operator because st is already a pointer to the first character of the string
 return 0;
}