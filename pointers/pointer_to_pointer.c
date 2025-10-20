#include <stdio.h>
int main() {

    int i = 9;
    int* j = &i;
    int** k = &j;

    printf("the value of i is %d\n" ,i);
    printf("The value of i is %d \n", *j);
    printf("The value of i is %d \n", **k);

    //note: '&' and '*' are opposite to each other
    //they cancels each other out

    printf("The value of i is %d \n",  *(&i) ); // & and * cancels each other out
    printf("The value of i is %d \n", **(&j)); // & and * cancels each other out


    return 0;
}