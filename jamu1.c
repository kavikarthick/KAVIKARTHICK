#include <stdio.h>
void main()
{
    int a,b,c;
    int array[5];
    printf("enter the first number");
    printf("enter a number");
    scanf("%d%d",&a,&b);
    printf("enter a array");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
    }
    for(int j=0;j<a;j++)
{
    c+=array[j];
}
 
    printf("%d",c);
}
