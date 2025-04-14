#include<stdio.h>
int main ()
{
    int x[10],sum=0,r;
    for(int i=0;i<10;i++)
    {
        printf("Enter value %d = ",i);
        scanf("%d",&x[i]);    
    }
    for(int j=0;j<10;j++)
    {
        sum=sum+x[j];
    }
    printf("\nsum = %d",sum);
    return 0;
}