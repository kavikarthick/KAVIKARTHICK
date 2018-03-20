#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
 char a[20];
 char b[20];
 int k,g;
 printf("Enter the name");
 scanf("%s %s",&a,&b);
 k=strlen(a);
 g=strlen(b);
 if(k>g)
 {
     printf(a);
 }
 else
 {
     printf(b);
 }
 
}
