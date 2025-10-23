#include <stdio.h>
int main() {
    int marks[] = {85, 90, 78, 92, 88}; //declaration and initialization of an array
   int *ptr = marks; // int* ptr = &marks[0]; are the same things

   for( int i = 0; i < 5; i++){
    printf("The marks at index %d is %d \n", i , marks[i]);
    //  printf("The marks at index %d is %d \n", i , *ptr);


    ptr++; //pointer arithmetic to point to the next element
   }

  return 0;
}