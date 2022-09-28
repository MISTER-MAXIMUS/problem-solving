#include<stdio.h>
int main()
{
    int year;
    printf("enter the year");
    scanf("%d",&year);
    if(year%400==0)
    {
printf("year is leap%d",year);
    }
    else if(year%100==0)
    {
        printf("year is not leap%d",year);
    }
    else if(year%4==0)
    {
        printf("year is leap%d",year);
    }
    else{
        printf("year is not leap%d",year);
    }


}