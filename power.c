#include<stdio.h>
main()
{
      int x,n;
      int i;
      printf("Enter the value of x and n:");
      scanf("%d%d",&x,&n);
      powers(x,n);
      getch();
}
powers(int x,int n)
{
 int i;
 int p;
 p=1;
 for(i=1;i<=n;i++)
      p*=x;
 printf("%d^%d = %d",x,n,p);
}
