#include<stdio.h>
int main()
{
    int x,y,gcd;
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
       
       printf("\n the gcd of given numbers is  %d",gcd);
    return 0;
}