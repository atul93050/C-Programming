#include<stdio.h>
int main()
{
    int x,a;
    printf("Enter num of row : ");
    scanf("%d",&x);
    a=x*2-1;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a;j++)
        {   
            if(i==x&&j==a-i+1)
            {
            printf(" ");
            }
            else 
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}