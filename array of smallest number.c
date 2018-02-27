 #include<stdio.h>
 #include<conio.h>
void main()
{
  int a[50],i,k,min;
  printf("Enter the range\n");
  scanf("%d",&k); 
  printf("Enter the array value\n");
  for(i=0;i<k;i++)
 {
   scanf("%d",&a[i]);
 }
   min=a[0];
   for(i=0;i<k;i++)
 {
   if(a[i]<min)
 {
    min=a[i];
  }
}
     printf(" The given three number in :%d is largest",min);
     return 0;
}
