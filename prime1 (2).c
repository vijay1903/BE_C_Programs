#include<stdio.h>
#include<math.h>
main()
{
      int n;
      printf("Enter the number:");
      scanf("%d",&n);
      prime(n);
      printf("The End\n\n");
      getch();
}
prime(int n)
{
          int i,j,num1,num2,a,b,c1=0,c2=0,d;
          d=count(n);
          for(i=1;i<d;i++)
          {
                          num1=n;
                          num2=n;
                          printf("n1=%d,,n2=%d\n",num1,num2);
                          a=powers(10,d-i);
                          b=powers(10,i);
                          c1+=primenumber(num1);
                          c2+=primenumber(num2);
                          num1=(num1%a);
                          num2=(num2/b);
                          printf("n1=%d,,n2=%d\n",num1,num2);
          }
          if(c1==(2*(d-1)))
          printf("Left Trunkatable Prime\n");
          else
          printf("Not Left Trunkatable Prime\n");
          if(c2==(2*(d-1)))
          printf("Right Trunkatable prime\n");
          else
          printf("Not Right Trunkatable Prime");
          getch();
}
primenumber(int num)
{
                int i,check;
                for(i=2;i<num;i++)
                {
                                  if(num%i==0)
                                  {
                                              check=1;
                                              break;
                                  }
                                  
                                  else
                                  check=2;
                }
                return(check);
}
count(int e)
{
          int k;
          for(k=0;e!=0;k++)
          e=(e/10);
          return(k);
}
powers(int x, int n)
{
 int i,p;
 p=1;
 for(i=1;i<=n;i++)
      p*=x;
return(p);
}
