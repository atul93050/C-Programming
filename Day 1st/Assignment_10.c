#include<stdio.h>
int main()
    {
    int a,km,m;
        printf("PLease Enter length in c.m. ");
        scanf("%d",&a);
        km=a/100000;
        m=(a-(km*100000))/100;
        printf("\n%d km, %d m",km,m);
        return 0;
    }