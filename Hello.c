#include<stdio.h>
extern int pass=258976;
main()
{
      int p;
      printf("Enter password::");
      scanf("%d",&p);
      if(p==pass)
      {
      int a=10,b=12,c;
      c=(a+b);
      printf("Hello\n%d",c);
      }
      else
      {
      printf("Wrong pass!!!!\n");
      main();
      }
      getch();
      
}
      
