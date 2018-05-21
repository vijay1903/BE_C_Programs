#include<stdio.h>
main()
{
      int n,n1,n2,n3,n4,n5,n6,n7,sn,x,x1,x2,x3,x4,x5,x6,x7,sx;
      printf("Enter any seven digit number::");
      scanf("%d",&n);
      n1=(n%10);
      n2=((n/10)%10);
      n3=((n/100)%10);
      n4=((n/1000)%10);
      n5=((n/10000)%10);
      n6=((n/100000)%10);
      n7=((n/1000000)%10);
      printf("%d%d%d%d%d%d%d\n",n1,n2,n3,n4,n5,n6,n7);
      sn=n1+n2+n3+n4+n5+n6+n7;
      for(x=(n+1);x<=10000000;x++)
      {
       x1=(n%10);
       x2=((n/10)%10);
       x3=((n/100)%10);
       x4=((n/1000)%10);
       x5=((n/10000)%10);
       x6=((n/100000)%10);
       x7=((n/1000000)%10);
       printf("%d%d%d%d%d%d%d\n",x1,x2,x3,x4,x5,x6,x7);
       sx=x1+x2+x3+x4+x5+x6+x7;
       if(sn==sx)
       {
        break;
        printf("%d",x);    
       }
        printf("%d",x);
       }
      printf("%d",x);
      getch();
}
      
