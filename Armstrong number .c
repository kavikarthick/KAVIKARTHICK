include<stdio.h>
#include<conio.h>
void main()
{
int n,rem,result,n1;
clrscr();
printf("Enter the number");
scanf("%d",&n);
if(n!=0)
{
rem=n%10;
result=result+rem*rem*rem;
n1=10;
printf(" Yes %d is an armstrong number",n);
}
else
{
printf(" It is not an armstrong number");
}
getch();
}
