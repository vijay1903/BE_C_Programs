#include<stdio.h>
struct process
{
       char id[10];
       int arrival_time;
       int burst_time;
       int priority;
};      
main()
{
  struct process pro[50];
  int i,j,k[50],l,n,ch,temp,time=0;
  printf("Enter the number of processes:\n");
  scanf("%d",&n);
  printf("\nProcess details::\n");
  printf("--------------------------------\n");
  //printf("ID\tArrival\tburst\trpiority\n");
 // printf("--------------------------------\n");
  
  for(i=0;i<n;i++)
  {
                  printf("\nProcess ID for Process %d:",i+1);
                  scanf("%s",&pro[i].id);
                  printf("\nArrival Time for Process %d:",i+1);
                  scanf("%d",&pro[i].arrival_time);
                  printf("\nBurst Time for Process %d:",i+1);
                  scanf("%d",&pro[i].burst_time);
                  printf("\nPriority for Process %d:",i+1);
                  scanf("%d",&pro[i].priority);
                  printf("\n");
  }
  printf("Info Fed\n");
  printf("\n Enter chice::\n1.FCFS    2.Prio based   3.SJF     4.RR\n");
  scanf("%d",&ch);
  int total=0;
  for(i=0;i<n;i++)
  {
                  total+=pro[i].arrival_time;                
  }
  switch(ch)
  {
            case 1:
                 printf("\nFCFS\n");
                 for(time=0;time<=total;time++)
                 {
                                               for(j=0;j<n;j++)
                                               {
                                                               if(time==pro[j].arrival_time)
                                                               {
                                                                            printf("\t%s",pro[j].id);
                                                                                                        
                                                               }
                                               }
                 }
                 
                 break;
                 getch();
                 
            case 2:
                 printf("\nPrio based\n");
                 for(time=0;time<=total;time++)
                 {
                                               printf("\nTime=%d",time);
                                               for(j=0;j<n;j++)
                                               {
                                                               if(time==pro[j].priority)
                                                               {
                                                                           printf("\t%s",pro[j].id);
                                                                                                        
                                                               }
                                               }
                 }
                 
                 break;
                 getch();
            
            case 3:
                 printf("\nSJF\n");
                 
                 break;
                 getch();
                 
            case 4:
                 printf("\nRR\n");
                 
                 break;
                 getch();
            default:
                    printf("\nWrong Input\n");
                    main();
                    break;
  }
  getch();

}
