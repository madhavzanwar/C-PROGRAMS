#include<stdio.h>
int main() {
int i=1, sum=0;
while(i <= 10){
sum += i;
i++;}

printf("The sum of first %d natural no.s is %d", i-1, sum);


return 0;
}