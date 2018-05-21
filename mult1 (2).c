#include<stdio.h>
#include<math.h>
main()
{
      int a,b,c,d1,d2,d3,n1[100],n2[100],n3[100];
      printf("Enter the first number::");
      scanf("%d",&a);
      printf("\nEnter the second number::");
      scanf("%d",&b);
      c=a*b;
      printf("%d * %d = %d\n",a,b,c);
      d1=count(a);
      d2=count(b);
      d3=count(c);
      printf("%d,,%d,,%d,,\n",d1,d2,d3);
      dis(a,d1);
      dis(b,d2);
      dis(c,d3);
      getch();
}
count(int e)
{
          int k;
for(k=0;e!=0;k++)
      {
                       e=(e/10);
      }/*k is the number of digits in n3*/
      return(k);
}
dis(int n,int k)
{
        int l,c[100];
        for(l=1;l<=k;l++)
      {
                       int p=(powers(10,l));
                       int q=(powers(10,l-1));
                      c[k-l]=((n%(p))/q);
                      
      }
      for(l=0;l<k;l++)
      printf("array[%d]=%d\n",l,c[l]);
      printf("\n");
}
powers(int x, int n)
{
 int i,p;
 p=1;
 for(i=1;i<=n;i++)
      p*=x;
return(p);
}

