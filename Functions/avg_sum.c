#include <stdio.h>

void num(int a, int b, int c, int d, int e){
    int sum = a + b + c + d + e;
    float average = sum / 5.0;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    if(a > b && a > c && a > d && a > e){
        printf("%d is the greatest\n", a);
    }
    else if(b > a && b > c && b > d && b > e){
        printf("%d is the greatest\n", b);
    }
    else if(c > a && c > b && c > d && c > e){
        printf("%d is the greatest\n", c);
    }
    else if(d > a && d > b && d > c && d > e){
        printf("%d is the greatest\n", d);
    }
    else{
        printf("%d is the greatest\n", e);
    }
}

int main() {
    int a, b, c, d, e;

    printf("Enter five integers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    num(a, b, c, d, e);

    return 0;
}
