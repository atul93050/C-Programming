//Wap in c to check the num is divisible by 5 and 11
#include<stdio.h>
int main()
{
    int x;
    printf("Enter the value of x");
    scanf("%d",&x);
    if(x%(5*11)==0)
    {
        printf("divisible by 5 and 7");
    }
    else
     {
        printf("not divisible by 5 and 7");
    }
    return 0;

}