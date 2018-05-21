#include<stdio.h>
main()
{
      struct time
      {
             int hrs;
             int min;
             int sec;
      }t;
      printf("Enter the no. of Hours ,minutes and seconds:");
      scanf("%d%d%d",&t.hrs,&t.min,&t.sec);
      int seconds;
      seconds=(3600*t.hrs)+(60*t.min)+(t.sec);
      printf("The time in seconds is %d.",seconds);
      getch();
}
