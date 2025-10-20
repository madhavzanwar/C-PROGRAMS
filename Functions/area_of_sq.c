//using math.h librabry to calculate area of square
#include<stdio.h>
#include<math.h>
int main(){
    int a=5;
    printf("The area of square is %f\n", pow(a,2));
     //we cant use ^ operator for power in c language
    //we cant use %d here because pow function returns double value
    return 0;
}