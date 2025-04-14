//wap in c to check even and odd num between 10 num by using 1D array
#include<stdio.h>
int main()
{
    int x[10];
        printf("Enter a num\n");
    for(int i=1;i<=10;i++)
    {
    
    scanf("%d",&x[i]);
    }
    for(int i=1;i<=10;i++)
    {
        if(x[i]%2==0)
        {
            printf("even %d\t",x[i]);
        }
        else
        {
            printf("Odd %d",x[i]);
        }
        printf("\n");
    }
    return 0;
}