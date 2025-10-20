#include<stdio.h>

// fucntion prototype
int sum(int, int);

//function defination
int sum (int x, int y){
 return x+y;

}

int main(){
    int a = 1;
    int b = 7;

    int c = sum(a,b);  //function call

    printf("%d\n", c);
    return 0;
    
}