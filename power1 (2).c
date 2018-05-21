#include<stdio.h>
main()
{
      int x,n,p;
      printf("Enter x and n:");
      scanf("%d%d",&x,&n);
      p=power(x,n);
      printf("%d ^ %d = %d\n",x,n,p);
      getch();
}
power(int x,int n)
{
          int p;
          if(n>1)
          {
                 p=x*power(x,n-1);
                 return(p);
          }
          else if(n==1)
          return(x);
}
              
