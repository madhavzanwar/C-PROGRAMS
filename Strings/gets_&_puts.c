//when you want to take input or display output for strings, you can use the following:

// scanf() and printf() — general input/output functions

// gets() and puts() — specifically for strings

#include <stdio.h>

int main() {
    char name[30];
    
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);  // safer input (replaces gets)

    printf("Hello ");
    puts(name);    // prints string + newline automatically
    
    return 0;
}
//why not to use gets()?
//gets() does not perform bounds checking and can lead to buffer overflows if the input exceeds the allocated size of the array.
//fgets() is safer as it limits the number of characters read, preventing overflow.