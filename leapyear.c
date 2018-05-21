#include<stdio.h>
#include<conio.h>
int main()
(
    int year;
    printf("enter a year");
    scanf("%d",&year);
    if(year%4==0)
    printf("%d IS LEAP YEAR",year);
    else
    printf("%d is not leap year",year);
    getch();
    
}
