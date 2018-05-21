#include<stdio.h>//Final Program
main()
{
      int sd,st,trk,ttl,blk,x,y,z,i,j;
      printf("\t\t\tProgram to convert 1D to 3D::");//The program is meant fo a single disk only.
      printf("\n\nEnter the details:\n");
      printf("Enter the number of logic blocks:");
      scanf("%d",&blk);
      printf("\nYou have the following choices of the number for selection::\nPlease select any three numbers from these number such that their product is %d",blk);
      printf("\n(1,");
      j=blk;
      for(i=2;i<j;i++)
      {
                         if((j%i)==0)
                         {
                              printf("%d,",i);
                                       
                         }
      }
      printf("%d)",blk);
      printf("\nNo. of sides:");
      scanf("%d",&sd);
      printf("\nNo.of sectors:");
      scanf("%d",&st);
      printf("\nNo. of tracks:");
      scanf("%d",&trk);
      if(((sd<=0))||(st<=0)||(trk<=0)||((sd*st*trk)!=blk))
      {
                          printf("Wrong input!!!!!!Please Try again\n\n");
                          main();
      }
      x=1,y=1,z=1;
      printf("Logical Block#-->Corres.Physical Block Address(side#,track#,sector#)");
      for(i=1;i<=blk;i++)
      {
                         
                         printf("\n%d-->(%d,%d,%d)",i,z,y,x);
                         x++;
                         if(x>trk)
                         {
                                  x-=trk;
                                  y++;
                         }
                         if(y>st)
                         {
                                 y-=st;
                                 z++;
                         }
                         
      }
      getch();
}
