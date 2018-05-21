#include<stdio.h>
main()
{
      int i,j,n;
      float s,sum,l;
      s=(1.00000000);
      sum=(0.00000000);
      printf("Enter the number of terms::\n");
      scanf("%d",&n);
      for(i=n;i>=1;i--)
      {
                       for(j=1;j<=i;j++)
                       {
                                     s=((s*j)/(2*j+1));
                       }
                       sum=(sum+s);
      }
      printf("The sum of series upto %d terms is %f",n,sum);
      getch();
}
