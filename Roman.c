#include<stdio.h>
main()
{
      int a,b,c,d,e,f,n;
      printf("Enter a number less than 1000:\n");
      scanf("%d",&n);
      if(n==1000)
      {
                 printf("M");
      }
      else if(n==999)
      {
      printf("IM");
      }
      else if(n==499)
      {
      printf("ID");
      }
      else if(n==99)
      {
      printf("IC");
      }
      else if(n==49)
      {
      printf("IL");
      }
      else if((n>=500)&&(n<999))
      {
        printf("D");
          
       a=n%500;
       b=a/100;
       if((n>=100)&&(n<500))
       {
         if(b==1)
         printf("C");
         if(b==2)
         printf("CC");
         if(b==3)
         printf("CCC");
         if(b==4)
         printf("CD");
       }
       c=a%100;
       if(c>=50)
       printf("L");
       d=c%50;
       e=d/10;
       if(e==1)
       printf("X");
       if(e==2)
       printf("XX");
       if(e==3)
       printf("XXX");
       if(e==4)
       printf("XL");
       f=d%10;
       if(f==1)
       printf("I");
       if(f==2)
       printf("II");
       if(f==3)
       printf("III");
       if(f==4)
       printf("IV");
       if(f==5)
       printf("V");
       if(f==6)
       printf("VI");
       if(f==7)
       printf("VII");
       if(f==8)
       printf("VIII");
       if(f==9)
       printf("IX");
}       
      getch();    
}              
