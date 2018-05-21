#include<stdio.h>
main()
{
      FILE *fp,*fs;
      int i;
      char ch;
      //char open[20]="Hello.c";
      fp=fopen("filemgmt.c","r");
      fs=fopen("New.txt","w");
      if((fp==NULL)||(fs==NULL))
      printf("\nFile not found or formed.");
      while(1)
      {
                          ch=fgetc(fp);
                          printf("%c",ch);
                          
                          
                          putc(ch,fs);
                          if(ch==EOF)
                          break;
      }
      getch();
}
