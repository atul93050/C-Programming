#include<stdio.h>
int main()
{
int x;
printf("Enter age = ");
scanf("%d",&x);
if(x>=18)
{
printf("%d,you are eligigle for voting",x);
}
if(x<18)
{
printf("%d,you are not eligigle for voting",x);
}

return 0;
}