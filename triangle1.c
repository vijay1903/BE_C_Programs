#include<stdio.h>
main()
{
      int i,j,k,n,l;
      printf("Enter the number of Rows::\n");
      scanf("%d",&n);
      for(i=n,l=(n-1);i<=(2*n-1);i++,l--)
      {
                       for(j=1;j<=l;j++)
                       {
                                            printf(" ");
                       }
                                        
                       for(k=1;k<=(i-l);k++)
                       {
                                              printf("*");
                       }
                       printf("\n");
      }
      getch();
}
