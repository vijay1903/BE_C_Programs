#include<stdio.h>
main()
{
      int i;
      float bal,rate,interest[1000],pay,ppm,paid,totalint=0,balance[1000];
      printf("Enter the outstanding balance::");
      scanf("%f",&bal);
      printf("Enter the payment per month::");
      scanf("%f",&ppm);
      printf("Enter the rate per annum::");
      scanf("%f",&rate);
      rate=(rate/100);
      printf("Month no. \tOut.Bal. \tInterest \n");
      printf("================================================\n");
      for(i=0;bal!=0;i++)
      {
                         balance[i]=bal;
                         pay=(ppm*12);
                         interest[i]=(bal*rate);
                         paid=(pay-interest[i]);
                         bal=(bal-paid);
                         totalint=totalint+interest[i];
                          if(interest[i]>bal)
                         bal=0.000000000;                        
      }
      for(i=0;balance[i]>0;i++)
      {
                         printf("%d \t\t%f \t%f \n",(i+1),balance[i],interest[i]);                         
                         
      }
      getch();
}
                         
