#include<stdio.h>
main()
{
      int i,j,a[100],k,l,d,v;
      printf("Enter the number of digits and the number:\n");
      scanf("%d%d",&d,&v);
      a[0]=v;
      l=1;
      for(i=1;i<d;i++)
      {
                      scanf("%d",&v);
                      a[i]=v;
      }
      for(j=d-1;j>=0;j--)
      {
                        for(k=0;k<j;k++)
                        {
                                        if(a[k]==a[j])
                                        {
                                                      a[j]='\0';
                                        }
                        }               
      }
      
      for(k=0;k<d;k++)
      {
       if(a[k]!='\0')
       printf("%d",a[k]);
      }
                      
      getch();
}
