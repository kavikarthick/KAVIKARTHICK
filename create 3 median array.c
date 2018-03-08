#include <stdio.h>
#include<conio.h>
int main(void)
{
	int n,i,temp,j;
	printf("Enter the number");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	
		scanf("%d",&a[i]);
	
	for(i=0;i<n;i++)
	
		for(j=i+1;j<n;j++)
		
			if(a[j]<a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		
  i=n/2;
  printf(" The median element input is: %d",a[i]);
	getch();
	return 0;
}
