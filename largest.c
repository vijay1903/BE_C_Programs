#include<stdio.h>
main()
{
      int *p,*q,r,a[100],i,j,temp,v;
      printf("Enter ten numbers::");
      for(i=0;i<10;i++)
      {
                       scanf("%d",&v);
                       a[i]=v;
      }
      temp=a[0];
      q=&a[0];
      for(j=0;j<10;j++)
      {
                       if(a[j]>temp)
                       {
                       temp=a[j];
                       p=&a[j];
                       }
                       else
                       continue;
      }
      r=(p-q)+1;
      printf("The largest number is %d.\n",temp);
      printf("Its position is %u th",r);
      getch();                       
}
