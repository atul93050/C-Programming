#include<stdio.h>
int main()
{
    int x,c=0;
    printf("Enter a num = ");
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
    {
if(x%i==0)
{
c++;
}
    }
    if(c==2)
    {
        printf("The num is prime num");
    }
    else {
        printf("The num is not prime num");
    }
    return 0;
}