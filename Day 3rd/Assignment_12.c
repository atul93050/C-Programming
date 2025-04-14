#include<stdio.h>
int main()
{
    int x,y,lcm,gcd;
    printf("Enter two num = \n");
    scanf("%d\n%d",&x,&y);
    for(int i=1;i<=x&&i<=y;i++)
    {
        if(x%i==0&&y%i==0)
               {
                    printf("divided by %d,",i);
              
                gcd=i;
               }
       }
       lcm=x*y/gcd;
       printf("\nlcm is %d",lcm);
    return 0;
}