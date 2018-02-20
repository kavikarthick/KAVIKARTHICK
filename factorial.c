#include<stdio.h>
int main()
{
  int i,a=1,num;
 
  printf("Enter a number: ");
  scanf("%d",&num);
 
  for(i=1;i<=num;i++)
      a=a*i;
 
  printf("Factorial of %d is: %d",num,a);
  return 0;
}
