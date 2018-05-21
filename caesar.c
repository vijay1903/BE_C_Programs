#include<stdio.h>
#include<string.h>
main()
{
      char word[100];
      int i,n,ascii[100];
      printf("Enter the words in capital letters:\n");
      gets(word);
      printf("Enter the shift number::");
      scanf("%d",&n);
      for(i=0;word[i]!='\0';i++)
      {
                                if(word[i]!=' ')
                                {
                                ascii[i]=word[i];
                                if(ascii[i]>=(90-n+1))
                                ascii[i]-=26;
                               /* printf("%c(%d)",word[i],ascii[i]);*/
                                ascii[i]=ascii[i]+n;
                                
                                word[i]=ascii[i];
                                /*printf("%c(%d)",word[i],ascii[i]);*/
                                  }
      }
                                
      puts(word);
      printf("\n");
      getch();
}
