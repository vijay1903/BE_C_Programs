#include<stdio.h>
main()
{
      float n,num,j;
      printf("Enter the number::\n");
      scanf("%f",&j);
      
      do
      {
                       j=(j/3);
/*                       printf("j=%f\n",j);*/
      }
      while((j!=1)&&(j>0));
      if(j==1)
      printf("power of 3\n");
      else
      printf("Not power of 3\n");
      getch();
}
