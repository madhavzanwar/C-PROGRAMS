#include <stdio.h>
//checking if a person is valid to drive or not
int main()
{
  int age;
 
 printf("please enter your age: \n");
 scanf("%d",&age);
 
 if (age>=60){
     printf("You can dirve and you are a senior citizen");
 }
 else if(age>=40){
 printf("You can drive and you are a elder");
 }
 else if(age>=18){
     printf("you can drive but drive carefully");
 }
 else
{
    printf("you cannot drive");
}
    return 0;
}
