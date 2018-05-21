#include<math.h>
#include<stdio.h>
main()
{
      int n,num1,num2,i,j,a,b,d,check1,check2;
      printf("Enter the number::\n");
      scanf("%d",&n);
      d=count(n);
      num1=n;
      num2=n;
      /*Cheching for the number to be prime*/
      for(j=d-1;j>=0;j--)
      {
                         printf("Left Truncatable ");
                         primenumber(num1);
                         printf("Right Truncatable ");
                         primenumber(num2);
                         printf("End\n\n");
                         a=pow(10,j);
                         b=pow(10,(d-j));
                         num1=(num1%a);
                         num2=(num2/b);
                         printf("a=%d,b=%d,num1=%d,num2=%d\n\n",a,b,num1,num2);
      }
      printf("The End\n\n");
      getch();
}

primenumber(int num)
{
     int i,check;
     for(i=2;i<num;i++)
     {
      if(num%i==0)
      {
                  printf("Not Prime\n");
                  check=1;
                  break;
      }
      else
          check=2;
     }
     if(check==2)
     printf("Prime.\n");
     getch();
}
count(int e)
{
          int k;
for(k=0;e!=0;k++)
      {
                       e=(e/10);
      }/*k is the number of digits in n3*/
      return(k);
}
