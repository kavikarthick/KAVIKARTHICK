#include<stdio.h>
 #include<conio.h>
void main()
{
  int a[50],i,k,max;
  printf("Enter the range\n");
  scanf("%d",&k); 
  printf("Enter the array value\n");
  for(i=0;i<k;i++)
 {
   scanf("%d",&a[i]);
 }
   max=a[0];
   for(i=0;i<k;i++)
 {
   if(a[i]>max)
 {
    max=a[i];
  }
}
     printf(" The given three number in :%d is largest",max);
     return 0;
}
