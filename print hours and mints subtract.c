#include<stdio.h>
#include<conio.h>
int main()
{
    int h,m,h1,m1,t,t1;
    printf("Enter time in hours and minutes");
    scanf("%d%d",&h,&m);
    printf("Enter second time in hours and minutes");
    scanf("%d%d",&h1,&m1);
{
    t=h-m;
    t1=h1-m1;
}
    printf("The difference in time is %d\t%d",t,t1);
    return 0;
    getch();
}
