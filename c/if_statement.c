//write a program in c to use of simple if
#include<stdio.h>
int main()
{
int x,y;
printf("Enter the value of x = ");
scanf("%d",&x);
printf("\nEnter the value of y = ");
scanf("%d",&y);
if(x>y)
{
printf("%d,x is greater",x);
}
if(x<y)
{
printf("%d,y is greater",y);
}
if(x==y)
{
printf("%d = %d, both are equal",x,y);
}
return 0;

}