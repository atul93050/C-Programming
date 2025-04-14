#include<stdio.h>
int main()
{
    int x;
    printf("\nEnter num of row :");
    scanf("%d",&x);
    for(int i=x;i>=1;i--)
    {
        for(int j=i;j>=1;j--)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
        return 0;
    }
