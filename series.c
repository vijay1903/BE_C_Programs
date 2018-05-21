#include<stdio.h>
main()
{
      int n,num;
      float sum;
      sum=(0.3333333);
      printf("Enter number\n");
      scanf("%d",&num);
      for(n=1;n<=num;n++)
      {
                         sum=(sum*(3*n-2)/(2*n-1));
                         if(n==1)
                         {
                         sum=(sum-(1/9));
                         }
                         printf("Sum=%f for %d\n",sum,n);
                         getch();
      }
      
      printf("Final Sum=%f",sum);

      getch();
}
                   
