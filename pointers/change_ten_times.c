#include<stdio.h>
int change_ten_times(int* a){
    *a = *a * 10;

}

int main(){
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);
    change_ten_times(&num);
    printf("The changed no. is %d \n", num);
    return 0;

}