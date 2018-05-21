#include<stdio.h>//Final Program
main(){
      int n,start,i,j,k,l=0;
      printf("\nEnter no. of entries:");//Input Start
      scanf("%d",&n);
      int a[n],b[n+3];
      for(i=0;i<n;i++){
                       printf("\na[%d]=",i);
                       scanf("%d",&a[i]);
      }
      printf("\nEnter the starting point:");
      scanf("%d",&start);//Input End
      printf("\n\n%d",start);//Series Output Start
      for(i=start,k=0;k<n,i<=200;i++,k++)
      {                                 
                       for(j=0;j<n;j++)
                       {
                                       if(i==a[j])
                                       {
                                       printf("-->%d",a[j]);
                                       b[l]=a[j];
                                       l++;
                                       }
                       }
      }
      printf("-->199");
      printf("-->0");
      b[l]=199;
      l++;
      b[l]=0;
      l++;
      for(i=0;k<n,i<=start;i++,k++)
      {                                 
                       for(j=0;j<n;j++)
                       {
                                       if(i==a[j])
                                       {
                                       printf("-->%d",a[j]);
                                       b[l]=a[j];
                                       l++;
                                       }
                       }
      }//Series Input End
      printf("\nGraphical representation::\n");//Graph start
      for(j=0;j<(start/3);j++)
                      printf("_");
                      printf("[%d]\n",start);
      for(i=0;i<n+2;i++)
      {
                      for(j=0;j<(b[i]/3);j++)
                      printf("_");
                      printf("[%d]\n",b[i]);
      }//Graph End
      getch();
}
