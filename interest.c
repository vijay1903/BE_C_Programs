#include<stdio.h>
main()
{
      float bal,ppm,rate,pay,inrt;
      int i;
      printf("Enter the outstanding balanve::");
      scanf("%f",&bal);
      printf("Enter the payment per month::");
      scanf("%f",&pay);
      printf("Enter the rate per annum::");
      scanf("%f",&rate);
      printf("_____________________________________\n");
      printf("S.No.\tyearno.\tOut.Bal.\tInterest\n");
      printf("---------------------------------------------------------------------\n");
      rate=(rate/100);
      
      for(i=0;(bal!=0);i++)
      {
                            printf("%d\t%d\t%0.4f\t%4.4f\n",i+1,i+1,bal,inrt);
                            inrt=(bal*rate);
                         ppm=pay-inrt;
                        
                      /*   pay[i]=ppm;
                       blnc[i]=bal;
                         yrs[i]=i;*/
                         bal-=ppm;                        
                        
                         if(bal==0)
                         {
                         printf("months=%d",i);
                         }
      }
      getch();
}
