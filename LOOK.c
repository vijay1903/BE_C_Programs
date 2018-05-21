#include<stdio.h>//Final Program
main(){
      int n,start,i,j,k,l=0;//Input Start
      printf("\nEnter no. of entries:");
      scanf("%d",&n);
      int a[n],b[n];
      for(i=0;i<n;i++){
                       printf("\na[%d]=",i);
                       scanf("%d",&a[i]);
      }
      printf("\nEnter the starting point:");
      scanf("%d",&start);//Input End
      printf("\n\n%d",start);//Series start
      for(i=start,k=0;k<n,i>=0;i--,k++)
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
      for(i=start;k<n,i<=200;i++,k++)
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
      }//Series End
      printf("\nGraphical representation::\n");//Graph start
      for(j=0;j<(start/3);j++)
                      printf("_");
                      printf("[%d]\n",start);
      for(i=0;i<n;i++)
      {
                      for(j=0;j<(b[i]/3);j++)
                      printf("_");
                      printf("[%d]\n",b[i]);
      }//Graph End
      getch();
}
