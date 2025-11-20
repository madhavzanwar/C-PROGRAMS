#include<stdio.h>


    struct vector
    {
        int x;
        int y;
    };

    struct vector sumVector(struct vector v1, struct vector v2){

    
        struct vector v3 = {v1.x + v2.x, v1.y + v2.y};
        return v3;

    }
   
    
int main(){
    struct vector v1 = {1, 2};
    struct vector v2 = {5, 6};
    struct vector v3 = sumVector(v1, v2);
    printf("The value of vector v3 is %d i + %d j\n", v3.x, v3.y);
    return 0;
}