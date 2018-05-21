#include<stdio.h>
#include<math.h>
main()
{
      int i;
      char temp,input[100];
      char word[100];
      printf("Enter the sentence to be reversed 10 words::\n");
      gets(input);
      for(i=0;i<10;i++)
      {                              
                                 word[i]=input[9-i];
      }
      puts(word);
      getch();
}
