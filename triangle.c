#include<stdio.h>
main()
{
      int i,j,n;
      printf("Enter n");
      scanf("%d",&n);
      for(i=1,j=1;i<=(2*n+1);i++,j++)
      {
                                     printf("*");
                                     /*if(i%2==0)
                                     {
                                     printf("\n");
                                     }*/
      }
      getch();
}
