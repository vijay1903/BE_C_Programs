#include<stdio.h>
#include<math.h>
main()
{
      int i,j,k,l,e,a[100],b[100],c[100],d,d1,v,m,n;
      int n1=0,n2=0,n3;
      char da[100];
      printf("1.Enter the number of digits and the number:\n");
      scanf("%d",&d);
      for(i=0;i<d;i++)
      {
                      scanf("%d",&v);

                      a[i]=v;
      }
      printf("2.Enter the number of digits and the number:\n");
      scanf("%d",&d1);
      for(i=0;i<d1;i++)
      {
                      scanf("%d",&v);

                      b[i]=v;
      }
      for(i=0;i<100;i++)
      {
                     if(i<d)
                     n1+=(a[i]*(pow(10,(d-i))));
                     if(i<d1)
                     n2+=(b[i]*(pow(10,(d1-i-1))));
      }
      printf("n1==%d\nn2==%d\n",(n1/10),n2);
      n3=((n1/10)*n2);
      printf("n3==%d\n",n3);
      e=n3;
      for(k=1;e!=0;k++)
      {
                       e=(e/10);
                       printf("k==%d\n",k);
                       printf("e==%d\n",e);
      }/*k is the number of digits in n3*/
      
      
      for(l=1;l<=k;l++)
      {
                       m=(pow(10,k-l));
                       n=(pow(10,l));
                      c[l]=((n3%(m))/n);
                      printf("c[%d]=%d\n",l-1,c[l]);
      }
      getch();
}

      
