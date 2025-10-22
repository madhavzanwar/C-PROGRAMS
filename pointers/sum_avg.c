#include<stdio.h>
int sum (int a, int b){
    int s = a+b;
    int* ptr = &s;
    printf("ther sum is %d \n" , s);
    return ptr;
}



float* average(int a, int b){
    float avg = (a+b)/2.0;
    float * ptr = &avg;
    printf("The avrage ids %f\n", avg);
    return ptr;
}

int main(){
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    sum(num1, num2);
    average(num1, num2);

    printf("Address of num1 is %p \n", &num1);
    printf("Address of num2 is %p \n", &num2);
    return 0;
}