#include<stdio.h>
int main()
{
    int x[5];
    for(int i=1;i<=5;i++)
    {
        printf("Enter value %d = ",i);
        scanf("%d",&x[i]);
    }
    for(int i=1;i<=5;i++)
    {
        printf("%d\n",x[i]);
    }

    return 0;
}