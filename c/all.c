#include<stdio.h>
void f1()
{
    int x,y;
    printf("\nenter two num");
    scanf("%d%d",&x,&y);
    printf("\n%d",x+y);
}
void f2(int x,int y)
{
printf("\n%d",x+y);
}
int f3()
{
int x,y;
    printf("enter two num");
    scanf("%d%d",&x,&y);
    printf("\n%d",x+y);
}
int f4(int x,int y)
{
    return x+y;
}
int main()
{
   int r,a,b;
    f1();
    scanf("%d%d",&a,&b);
    f2(a,b);
    
   
    f3();
    scanf("%d%d",&a,&b);
    r=f4(a,b);
    printf("\n%d",r);
    return 0;
}