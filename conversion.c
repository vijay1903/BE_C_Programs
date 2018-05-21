#include<stdio.h>
#include<math.h>
main()
{
      int n,i,ch,b1=0,b2=0,x,y,z;
      float deci,d,b3=0.00;
      char c;
      
      while(c!='q')
      {

       printf("\t::Welcome to the conversion program::\n");
       printf("\nThis program converts Decimal numbers to Binary and Binary numbers into Decimal numbers.\n");
       printf("\nPlease Enter your chice for conversion::\n1.Decimal to Binary Conversion.\n2.Binary to Decimal Conversion.\n\n");
       scanf("%d",&ch);
      
       switch(ch)
       {
                case 1:

                     printf("\nYou selected Decimal to Binary Conversion::\n");
                     printf("\nEnter the decimal number to be converted:");
                     scanf("%f",&d);
                     printf("\n");
                     b1=0;
                     b2=0;
                     if(d<0.00)
                     {
                               printf("\n Wrong input. Please try again.\n");
                               main();
                     }
                     printf("You entered %8.4f.\n",d);
                     n=d;
                     for(i=0;n!=0;i++)
                     {
                                      
                                      b1+=((powers(10,i))*(n%2));
                                      n=n/2;
                                      //printf("\n%d,%d\n",n,b1);
                     }
                     n=d;
                     deci=d-n;
                     
                     for(i=0;i<8;i++)
                     {
                                     deci*=2;
                                     x=deci;
                                     b2+=((powers(10,7-i))*(x));
                                     deci=deci-x;
                     }
                     
                     printf("The binary coversion is ");
                     if(b2==0)
                              printf("%d",b1);
                     else
                         printf("%d.%d",b1,b2);
                break;
                
                case 2:
                     
                     b1=0;
                     b2=0;
                     printf("You selected Binary to Decimal Conversion::\n");
                     printf("\nEnter the binary number to convert::");
                     scanf("%f",&d);
                     printf("\n");
                     if(d<0.00000001)
                     {
                                     printf("\nWrong Input.\nInput out of range.\nPlease Try Again.\n");
                                     main();
                     }
                     
                     for(i=0;i<8;i++)
                     {
                                     x=d;
                                     y=((d-x)*100000000);
                                     z=((x%powers(10,7-i))/powers(10,6-i));
                                     //printf("\nx=%d,y=%d,z(x)=%d\n",x,y,z);
                                     if((z!=1)&&(z!=0))
                                     {
                                                       printf("\nWrong Input.\nNumber not Binary.\nPlease Try Again.\n");
                                                       main();
                                     }
                                     z=((y%powers(10,7-i))/powers(10,6-i));
                                     //printf("z(y)=%d",z);
                                     if((z!=1)&&(z!=0))
                                     {
                                                       printf("\nWrong Input.\nNumber not Binary.\nPlease Try Again.\n");
                                                       main();
                                     }
                     }
                     
                     printf("You entered %f.\n",d);
                     n=d;
                     deci=d-n;
                     
                     for(i=0;i<8;i++)
                     {
                                     b1+=(((n%powers(10,7-i))/(powers(10,6-i)))*(powers(2,6-i)));
                     }
                     
                     deci*=100000000;
                     int dec=deci;
                     for(i=0;i<8;i++)
                     {
                                     y=(powers(10,7-i));
                                     b3+=((dec%(y))/(powers(2,i+1)));
                     }
                     printf("The conversion is::");
                     
                     if(dec==0)
                     {
                                printf("%d\n",b1);
                     }
                     else
                     {
                         printf("%f\n",b1+b3);
                     }
                     
                     break;
                     
                /*case 3:
                     c='q';
                     main();
                     break;*/
                default:
                     
                        printf("Wrong Input. Please Try Again.\n");
                        main();
                        break;
                        }                  
      
     
      printf("\nThanks for using the Program.\n");
      printf("Press q to exit.\n");
      scanf("%s",&c);
      
      }
getch();           
}
int powers(int x,int r)
{
    int i,p=1;
    for(i=0;i<r;i++)
    p*=x;
    return(p);
}


