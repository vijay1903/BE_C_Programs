#include<stdio.h>
#include<math.h>
main()
{
      int n;
 scanf("%d",&n);
 power(n);
 getch();
}
power(int d)
{
      int i,p=1;
      for(i=0;i<=d;i++)
      {
      p=p*10;
      }
      printf("10^%d=%d",d,p);
      getch();
      
}
