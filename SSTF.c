#include<stdio.h>//Final Program
main(){
      int n,start,i,j,k,l=0;
      printf("\nEnter no. of entries:");//Input Start
      scanf("%d",&n);
      int a[n],b[n];
      for(i=0;i<n;i++)
      {
                       printf("\na[%d]=",i);
                       scanf("%d",&a[i]);
      }
      printf("\nEnter the starting point:");
      scanf("%d",&start);//Input End
      printf("\n\n%d",start);//Series output start
      int st=start;
      for(i=start,j=start;((i>0)||(j<200));i--,j++)
      {
                                               for(k=0;k<n;k++)
                                               {
                                                   if(a[k]==i||a[k]==j)
                                                   {
                                                   b[l]=a[k];
                                                   start=a[k];
                                                   printf("-->%d",a[k]);
                                                   l++;
                                                   }
      }
      }//Series output end
      printf("\nGraphical representation::\n");//graphical output start
      for(j=0;j<(st/3);j++)
                      printf("_");
                      printf("[%d]\n",st);
      for(i=0;i<n;i++)
      {
                      for(j=0;j<(b[i]/3);j++)
                      printf("_");
                      printf("[%d]\n",b[i]);
      }//graphical output end
      getch();
}

