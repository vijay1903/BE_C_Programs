#include<stdio.h>
#include<string.h>
main()
{
      int i,j,k;
      char sent[100],word[100];
      printf("Enter the sentence::");
      gets(sent);
      for(i=0;sent[i]!='\0';i++)
      k=i+1;
//      printf("No. of characters is %d",k);
      for(i=k-2;i>=0;i--)
      {
                         if(sent[i]==' ')
                         {
                                       j=i+1;
                                       while(sent[j]!=' ')
                         
                                       {
                                         printf("%c",sent[j]);
                                         j++;
                                       }
                                       printf("%c",sent[i]);                                       
                                      // printf(" ");
                         }
      }
      for(i=0;sent[i]!=' ';i++)
      printf("%c",sent[i]);
      getch();
}
