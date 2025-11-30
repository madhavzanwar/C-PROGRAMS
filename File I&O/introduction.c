#include <stdio.h>
int main(){
    FILE *ptr; //Pointer to a file
    ptr = fopen("Madhav.txt", "r"); //Open file in read mode
    int num;
    fscanf(ptr, "%d", &num); //Read an integer from the file
    printf("The value of num is %d\n", num);
    fclose(ptr); //Close the file
}
// "r" - open for reading
// "w" - open for writing
// "a" - open for appending (append means adding to the end of the file)
// "r+" - open for reading and writing
// "w+" - open for reading and writing (file is created if it does not exist, otherwise it is truncated)
// "a+" - open for reading and appending
//"rb", "wb", "ab", "r+b", "w+b", "a+b" - same as above but in binary mode
// Always remember to close the file after operations
// fclose(ptr);

// If the file does not exist, fopen() returns NULL