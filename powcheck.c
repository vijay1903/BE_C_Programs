#include<stdio.h>
#include<math.h>
main()
{
      printf("%d",powers(10,2));
      getch();
}
int powers(int x,int r)
{
    int i,p=1;
    for(i=0;i<r;i++)
    p*=x;
    return(p);
}
