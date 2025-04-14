#include<stdio.h>
int main()
{
    int num,total,per;
    scanf("%d%d",&num,&total);
    per=(num*100)/total;
    printf("%d%% ",per);
    return 0;
}