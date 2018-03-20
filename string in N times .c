#include<stdio.h>
#include<conio.h>
void main()
{
    int k,i;
     char str[10];
    printf("Enter the string");
    scanf("%s",&str);
    printf("How many times");
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
        printf("\n%s",str);
    }
    return 0;
}
