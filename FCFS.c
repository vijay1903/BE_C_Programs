#include<stdio.h>//Final Program
main(){
      int n,start,i,j;
      printf("\nEnter no. of entries:");//Input Start
      scanf("%d",&n);
      int a[n];
      for(i=0;i<n;i++){
                       printf("\na[%d]=",i);
                       scanf("%d",&a[i]);
      }
      printf("\nEnter the starting point:");
      scanf("%d",&start);//Input End
      printf("\n\n%d",start);//Series Output Start
      for(i=0;i<n;i++)
      {
      printf("->%d",a[i]);
      }//Series Putput End
      printf("\nGraphical representation::\n");//Graphical output start
      for(j=0;j<(start/3);j++)
                      printf("_");
                      printf("[%d]\n",start);
      for(i=0;i<n;i++)
      {
                      for(j=0;j<(a[i]/3);j++)
                      printf("_");
                      printf("[%d]\n",a[i]);
      }//Graphical output end

      getch();
}
