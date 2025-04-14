#include<stdio.h>
int main()
{
    int x,div;
    printf("enter a num");
    scanf("%d",&x);
    for(int i =1;i<=x;i++)
    {
        div=x%i;
        if(div==0)
        {
            printf("%d,",i);
        }
    }
    return 0;
}