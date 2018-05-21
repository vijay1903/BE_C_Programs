#include<stdio.h>
#include<string.h>
main()
{
      char word1[100],word2[100];
      int i,j,c;
      printf("Enter the words:\n");
      gets(word1);
      gets(word2);
      for(i=0;word1[i]!='\0';i++)
      {
                                for(j=0;word2[j]!='\0';j++)
                                {
                                                        if(word1[i]==word2[j])
                                                        {
                                                        c=1;
                                                        break;
                                                        }
                                                        else
                                                        c=2;
                                }
                                if(c==2)
                                break;
      }
      switch(c)
      {
      case 1:
              printf("Anagram.");
              break;
      case 2:
              printf("Not Anagrams.");
              break;
      }
      getch();
}
