#include<stdio.h>
main()
{
      char a[100],b[100],c[100];
      int i;
      gets(a);
      gets(b);
      for(i=0;i<=2;i++)
      c[i]=a[i]*b[i];
      puts(c);
      for(i=0;i<=4;i++)
      printf("%d",a[i]);
      getch();
      
}
