#include<stdio.h>/*Not running for odd number of matrices see that*/
main()
{
      int i,j,k,l,N,temp;
      int *p,*q,*r;
      printf("Enter the size of the matrix\n");
      scanf("%d",&N);
      int a[N][N];
      printf("Enter the elements of the Matrix::\n");
      for(i=0;i<N;i++)
      {
                      for(j=0;j<N;j++)
                      {
                                      printf("a(%d,%d)=",i+1,j+1);
                                      scanf("%d",&a[i][j]);
                      }
      }
      printf("The Matrix is::\n\n");
      for(i=0;i<N;i++)
      {
                      printf("|");
                      for(j=0;j<N;j++)
                      {
                                      printf(" %d ",a[i][j]);
                      }
                      printf("|\n");
      }
   /*   for(i=0;i<N;i++)
      {
                      for(j=0;j<N;j++)
                      {
                                      printf("(%d,%d)==%u,,",i+1,j+1,&a[i][j]);
                      }
                      printf("\n");
      }*/
      p=&a[0][0];
      q=&a[N-1][N-1];
      for(i=p,j=q,k=0;k<=(N*N/2);i+=4,j-=4,k++)
      {
   //                    printf("%u,,%u\n",i,j);
                       swapr(i,j);                      
                          
      }
      
      printf("The Reversed Matrix is::\n\n");
      for(i=0;i<N;i++)
      {
                      printf("|");
                      for(j=0;j<N;j++)
                      {
                                      printf(" %d ",a[i][j]);
                      }
                      printf("|\n");
      }
      main();
      
      
      getch();
}
swapr( int *x, int *y )
{
int t;
t=*x;
*x=*y;
*y=t;
}
