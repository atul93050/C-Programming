#include<stdio.h>
int main()
{
    int x,year,week,day;
    printf("Enter the num of days ");
    scanf("%d",&x);
    //(x%366==0);
   // printf("%d is a leap year",x);
    year=x/365;
    week=(x-year*365)/7;
    day=x-(week*7+year*365);
    printf("\n%d year,%d week,%d days",year,week,day);
    return 0;
}