#include<stdio.h>      
#include<stdlib.h>
struct process
{
       char id[10];
       int arrival_time;
       int burst_time;
       int priority;
};      
main()
{
  struct process pro[50];//Time less than 1000 seconds and priority less than or ezual to 10
  int i,j,k[50],l,n,ch,temp,time=0,time_slice;
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
                  printf("Arrival Time for Process %d:",i+1);
                  scanf("%d",&pro[i].arrival_time);
                  printf("Burst Time for Process %d:",i+1);
                  scanf("%d",&pro[i].burst_time);
                  printf("Priority for Process %d:",i+1);
                  scanf("%d",&pro[i].priority);
                  printf("\n");
  }
  printf("\n\t\tInfo Fed\n");
  printf("\nProcess ID \tArrival Time \tBurst Time \tPriority\n");
  printf("===================================================================\n");
  for(i=0;i<n;i++)
  {
                  
  printf("%s\t\t %d\t\t %d\t\t %d\n",pro[i].id,pro[i].arrival_time,pro[i].burst_time,pro[i].priority);
  }
  printf("====================================================================\n");
  
  choose :
  printf("\n Enter choice::\n1.FCFS    2.Prio based   3.SJF     4.RR      5.To exit\n");
  scanf("%d",&ch);
  int total=0;
  
  switch(ch)
  {
            case 1:
                 printf("\nFCFS\nThe processes would be executed in the following order::\n");
                 printf("\nProcess ID \tArrival Time \tBurst Time \tPriority\n");
                 printf("===================================================================\n");
  
                                 for(time=0;time<=1000;time++)
                                 {
                                                              for(i=0;i<n;i++)
                                                              {
                                                                              if(time==pro[i].arrival_time)
                                                                              printf("%s\t\t %d\t\t %d\t\t %d\n",pro[i].id,pro[i].arrival_time,pro[i].burst_time,pro[i].priority);
                                                              }
                                 }
                                 goto choose;
                 break;
                 getch();
                 
            case 2:
                 printf("\nPrio based\n");
                 printf("\nProcess ID \tArrival Time \tBurst Time \tPriority\n");
                 printf("===================================================================\n");
                 for(time=0;time<=10;time++)
                                 {
                                                              for(i=0;i<n;i++)
                                                              {
                                                                              if(time==pro[i].priority)
                                                                              printf("%s\t\t %d\t\t %d\t\t %d\n",pro[i].id,pro[i].arrival_time,pro[i].burst_time,pro[i].priority);
                                                              }
                                 }
                                 goto choose;
                 break;
                 getch();
            
            case 3:
                 printf("\nSJF\n");
                 printf("\nProcess ID \tArrival Time \tBurst Time \tPriority\n");
                 printf("===================================================================\n");
                 for(time=0;time<=1000;time++)
                                 {
                                                              for(i=0;i<n;i++)
                                                              {
                                                                              if(time==pro[i].burst_time)
                                                                              printf("%s\t\t %d\t\t %d\t\t %d\n",pro[i].id,pro[i].arrival_time,pro[i].burst_time,pro[i].priority);
                                                              }
                                 }
                                 goto choose;
                 break;
                 getch();
                 
            case 4:
                 printf("\nRound Robin\n");
                 printf("\nEnter the time slice:");
                 scanf("%d",&time_slice);
                 printf("\nProcess ID \tArrival Time \tBurst Time \tPriority\n");
                 printf("===================================================================\n");
  
                 for(i=0;i<n;i++)
                                 total+=pro[i].burst_time;
                 for(time=0;time<=1000;time++)
                                 {
                                              for(j=0;total>0;j++)
                                              {
                                                              for(i=0;i<n;i++)
                                                              {
                                                                              if(pro[i].burst_time>=0)
                                                                              printf("%s\t\t %d\t\t %d\t\t %d\n",pro[i].id,pro[i].arrival_time,pro[i].burst_time,pro[i].priority);
                                                                               pro[i].burst_time-=time_slice;
                                                              }
                                                              for(i=0;i<n;i++)
                                                              total+=pro[i].burst_time;
                                                              }
                                 }
                 break;
                 getch();
 
            default:
                    printf("\nWrong Input\n");
                    main();
                    break;
  }
    printf("===================================================================\n");
  getch();

}
