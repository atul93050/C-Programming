//wap in c to print table of any num using this format
#include<stdio.h>
int main()
{
    int x,i;
    printf("Enter any num ");
    scanf("%d",&x);
    for(i=1;i<=10;i++)
    {
        printf("\n%d *  %d  =  %d",x,i,x*i);
    }
    return 0;
}