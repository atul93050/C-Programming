#include<stdio.h>
int main()
{
    int power,num,result=1;
    printf("Enter a num and its power= ");
    scanf("%d%d",&num,&power);
    for(int i=1;i<=power;i++)
    {
        result=num*result;
    }
    printf("\nresult is %d ",result);
    return 0;
    
}