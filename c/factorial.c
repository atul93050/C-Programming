// wap in c to check factorial num by using this formate
#include<stdio.h>
int main()
{
    int x,fact=1;
    printf("\nEnter num = ");
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
    {
        if(i!=x)
        {
            printf("%d*",i);
        }
        else{
            printf("%d=",i);
        }
        fact=fact*i;
    
    }
    printf("%d",fact);
    return 0;
}