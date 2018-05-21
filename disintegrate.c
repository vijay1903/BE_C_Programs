#include<stdio.h>
#include<math.h>
main()
{
      int n;
      printf("Enter the number::");
      scanf("%d",&n);
      
      getch();
      int i,j,a,c,d,e=n,b[100];
        for(i=1;e!=0;i++)
        {
                         e=(e/10);
        }
        e=n;
        i=i-1;
        printf("The number of digits in %d is %d\n\n",e,i);
        
        for(j=i;j>=1;j--)
        {
                         a=n;
                         c=(pow(10,j));
                         d=(pow(10,(j-1)));
                         a=((e%c)/(d));
                         printf("%d,,%d,,%d\n",c,d,a);
                         b[i-j]=a;
                         printf("b[%d]==%d\n",i-j,b[i-j]);
        }
        getch();
}       
