#include<stdio.h>
int main()
{
    int x;
    printf("Enter a num ");
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
    {
        printf("%d\n",i);
    }
    return 0;
}