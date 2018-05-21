#include<stdio.h>
#include<math.h>
main()
{
      float dist,a,b;
      struct POINT
      {
             float x;
             float y;
      }p1,p2;
      printf("Enter the x and y coordinates of first point::");
      scanf("%f%f",&p1.x,&p1.y);
      printf("Enter the x and y coordinates of second point::");
      scanf("%f%f",&p2.x,&p2.y);
      a=p2.y-p1.y;
      a*=a;
      b=p2.x-p1.x;
      b*=b;
      dist=sqrt(a+b);
      printf("The distance bettween the points(%0.2f,%0.2f) and (%0.2f,%0.2f) is %0.4f",p1.x,p1.y,p2.x,p2.y,dist);
      getch();
}
