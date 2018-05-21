#include<stdio.h>
main()
{
      int a[7],b[7],value,e,f,g,h,j,i,k,l,m,num,n;
      printf("Enter a seven digit number::(Press Enter after every Digit)\n");
      for(i=0;i<7;i++)
      {
      scanf("%d",&value);
      a[i]=value;
      }
      num=a[6]+(a[5]*10)+(a[4]*100)+(a[3]*1000)+(a[2]*10000)+(a[1]*100000)+(a[0]*1000000);
      printf("You entered %d\n",num);
     for(i=0;i<7;i++)
      {
      printf("a[%d]=%d\n",i,a[i]);
      }
      for(j=6;j>=0;j--)
      {
                       if(a[j]>a[j-1])          
                       {
                                                k=(j-1);
                                                printf("%d\n",k);
                                                break;
                       } 
      }
      for(g=k;g<6;g++)
      {
      for(e=k;e<6;e++)
      {
      if(a[e]>=a[e+1])
      {
                     f=a[e];
                     a[e]=a[e+1];
                     a[e+1]=f;
      }
      else
      continue;
      }
      }
      n=a[6]+(a[5]*10)+(a[4]*100)+(a[3]*1000)+(a[2]*10000)+(a[1]*100000)+(a[0]*1000000);
      if(n==num)
      printf("The number does not have an HPN\n");
      printf("Sorted array is %d\n",n);/*working coorectly upto here*/
      for(i=0;i<7;i++)            
                              {
                                              value=a[i];
                                              b[i]=value;
                              }/*saving a in b*/
      for(g=5;g>=k;g--)
      {
                      for(e=g+1;e<=6;e++)
                      {
                                        
                             for(i=0;i<7;i++)
                              {
                                              value=b[i];
                                              a[i]=value;
                              }
                       
                             if(n<=num)
                             {
                                      h=a[e];
                                      a[e]=a[g];
                                      a[g]=h;
                              
                                      for(i=0;i<7;i++)/*To print the changed number*/
                                      {
                                      printf("%d",a[i]);
                                      if(i==6)
                                      printf("\n");
                                      }
                                      n=a[6]+(a[5]*10)+(a[4]*100)+(a[3]*1000)+(a[2]*10000)+(a[1]*100000)+(a[0]*1000000);
                             }
                             /*for(i=0;((i<=0)&&(n>num));i++)
                             {
                                      h=a[e];
                                      a[e]=a[g];
                                      a[g]=h;
                              
                                      for(i=0;i<7;i++)/*To print the changed number
                                      {
                                      printf("%d",a[i]);
                                      if(i==6)
                                      printf("\n");
                                      }
                                      n=a[6]+(a[5]*10)+(a[4]*100)+(a[3]*1000)+(a[2]*10000)+(a[1]*100000)+(a[0]*1000000);
                              }*/
                             /*else if(n>num)
                             break;*/
                             
                      }
      }         
      printf("The next Permutation is %d\n",n);
      getch();
}
