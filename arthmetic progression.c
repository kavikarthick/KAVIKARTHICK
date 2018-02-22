#include<stdio.h>
#include<conio.h>
int main()
{
    int first,diff,terms,value,sum=0,i;
    printf("Enter the number of terms in AB series\n");
    scanf("%d",&terms);
    printf("Enter the first terms and common difference of AP series\n");
    scanf("%d %d",&first,&diff);
    value=first;
    printf("AP SERIES\n");
    for(i=0;i<terms;i++)
    {
        printf("%d",value);
        sum+=value;
        value=(value+diff);
    }
    printf("\nsum of the AP SERIES till %d terms is %d\n",terms,sum);
    getch();
    return(0);

}
