#include <stdio.h>

int main()
{
  float radius,height;
  printf("Enter the radius:\n");
  scanf("%f",&radius);
  
  printf("Enter the height:\n");
  scanf("%f",&height);
  
  printf("The volume of cylinder is:%f",3.14*radius*radius*height);
  return 0;
}
