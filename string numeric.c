#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
char string[10];
int c=0;
printf("Enter the string");
scanf("%s",&string);
 for(int i = 0; i < strlen( string ); i ++)
   {
      if (string[i] < 48 || string[i] > 57)
       {
  printf(" There is no string");
break;
   }
}
if(c==0)
printf(" Yes  this number is a string");
return 0;
}
