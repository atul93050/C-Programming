//wap in c to print 1 to 200 by using all loop
#include<stdio.h>
int main()
{
    int x=1;
    // while(x<=200)
    // {
    //     printf("%d\t,",x);
    //     x++;
    // }
    // for(int x=0;x<=200;x++)
    // {
    //     printf("%d\t",x);
    // }
    do
    {
        printf("%d\t",x);
        x++;
    }
    while(x<=200);
    return 0;
}