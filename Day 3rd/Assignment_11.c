#include<stdio.h>
int main()
{
    int x,rev=0;
    printf("Enter a num = ");
    scanf("%d",&x);
    for(int i=0;i<=x;i++)
    {
        rev=rev*10+x%10;
       x=x/10;
    }
    printf("\nrev num is = %d",rev);
    return 0;
}