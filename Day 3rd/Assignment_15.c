#include<stdio.h>
int main ()
{
    int x;
    printf("Enter num of row  ");
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
    {
        for(int j=x;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}