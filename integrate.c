#include<stdio.h>
#include<math.h>
main()
{
      int a[100],n=0,i,j,d,v,p;
      printf("Enter the number of digits::");
      scanf("%d",&d);
      printf("Enter the elements of a[]::");
      for(i=0;i<d;i++)
      {
      scanf("%d",&v);
      printf("%d\n",v);
      a[i]=v;
      p=(pow(10,d-i-1));
      n=n+(a[i]*p);
      printf("a[%d]=%d,,p=%d,,n=%d\n",i,a[i],p,n);
      }
      printf("The number is %d",n);
      getch();
}
