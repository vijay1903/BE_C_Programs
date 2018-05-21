#include<stdio.h>//Final Program
main()
{
      int sd,st,trk,ttl,x,y,z,i;
      printf("\n Program to convert 3D to 1D::");
      printf("\nEnter the details:\n");
      printf("\nNo. of sides:");
      scanf("%d",&sd);
      printf("\nNo.of tracks:");
      scanf("%d",&trk);
      printf("\nNo. of sectors:");
      scanf("%d",&st);
      if((sd<=0)||(st<=0)||(trk<=0))
      {
                          printf("\nWrong input!!!!!!Please Try again\n\n");
                          main();
      }
      ttl=st*sd*trk;
      printf("\n(side#,track#,sector#)-->Corresponding Logical Block#");
      for(x=1;x<=sd;x++)
      {
                         for(y=1;y<=trk;y++)
                         {
                                            for(z=1;z<=st;z++)
                                            {
                                                               printf("\n(%d,%d,%d)-->%d",x,y,z,((st*trk)*(x-1)+(st*(y-1))+z));
                                            }
                         }                  
      }
      getch();
}
