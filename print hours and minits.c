#include<stdio.h>
#include<conio.h> 
int main()
    {
      int h,m, total_minutes;
      printf("\nEnter the Time in Hours and Minutes:\n");
      printf("\nHours:\t");
      scanf("%d", &h);
      printf("\nMinutes:\t");
      scanf("%d", &m);
      {
      total_minutes = (h * 60) + m;
      }
      printf("\nTotal Time in Minutes:\t%d\n", total_minutes);
      return 0;
      getch();
    }
