#include<stdio.h>
#include<conio.h>
int prime_factor(int);
main()
{    int i,j,k,flag=0;
     int n,m;
     printf("enter a number");
     scanf("\n%d",&n);
     for(i=2;i<n;i++)
    {
                    for(j=2;j<i;j++)
                    {
                              
                              if(i%j==0)
                              {
                                        flag=1;
                                        break;
                               }
                               flag=0;
                              
                    }
                    if((flag==0)&&(n%i==0))
                    printf("\n%d",i);
                    }
                    getch();
                    }
