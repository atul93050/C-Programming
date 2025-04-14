#include<stdio.h>
int main()
{
    int i;
    for(i=8;i>=1;--i)
    {
        for(int k=1;k<=i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}