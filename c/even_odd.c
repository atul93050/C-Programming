#include<stdio.h>
int main()
{
    int x;
    printf("Enter a num = ");
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
    {
        if(i%2==0)
        {
             printf("even\n");
             printf("%d\t",i);
        }
        else{
             printf("odd\n");
             printf("%d\t",i);
        }
    }
    return 0;
}