#include<stdio.h>
#include<conio.h>
main()
(
    int yar;
    printf("enter any year");
    scanf("%d",&yar);
    if((yar%4==0)&&(yar%100==0)||(yar%400==0))
    printf("%d IS LEAP YEAR",yar);
    else
    printf("%d is not leap year",yar);
    getch();
    
}
