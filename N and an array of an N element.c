#include<conio.h>
#include <stdio.h>
int main() 
{
    int a,b[10],i;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<a;i++)
    {
      printf("%d %d\n",b[i],i);
    }
	return 0;
	getch();
}
