#include<stdio.h>
int main()
{
    int x;
    printf("Enter a num = ");
    scanf("%d",&x);
    if (x==0)
    {
    printf("\n%d, num is zero",x);
    }
    if (x<0)
    {
         printf("\n%d, num is negative",x);
    }
      if (x>0)
    {
         printf("\n%d, num is positive",x);
    }
    return 0;
    
    
}