#include <stdio.h>
//to check whether a student ia pass or fail

int main()
{
    
int marks1,marks2,marks3;

   printf("Enter the marks of sub1: \n");
   scanf("%d", &marks1);
   
     printf("Enter the marks of sub2: \n");
   scanf("%d", &marks2);
   
     printf("Enter the marks of sub3: \n");
   scanf("%d", &marks3);
   
   
   
 printf("The marks are %d %d and %d \n", marks1, marks2, marks3 );
 
 if (marks1<33 || marks2<33 || marks3<33)
 printf("You are failed due to less marks in individual subjects \n");
 
 
 else if ((marks1 + marks2 + marks3)/ 3 < 40)
 {
 printf("You are failed due to total percentage \n");
 
 }
 
 else {
     printf("you are passed!! \n");
 }
    return 0;
}