#include<stdio.h>
int main()
{
    int x;
    printf("\nEnter num = ");
    scanf("%d",&x);
    x=x%2;
    switch (x)
    {
    case 0:
        printf("\neven num ");
        break;
    
    default:
    printf("\nodd num ");
        break;
    }
    return 0;
}