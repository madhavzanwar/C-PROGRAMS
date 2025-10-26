#include <stdio.h>

int main() {
    char str[] = "Madhav";
    int i = 0, count;
    char c = str[i];

    while(c != 0){
        c = str[i];
        i++;
    }

    count = i - 1; //subtracting 1 to not count the null character
    printf("Length of the string is: %d\n", count);

    return 0;
}