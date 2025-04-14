//wap in c to add to num 
// no return type and no passing parameter 
#include<stdio.h>
#include<conio.h>
void f1()
{
int a,b;
printf("Enter first and second num ");
scanf("%d%d",&a,&b);
printf("sum is %d",a+b);
}
void main()
{
clrscr();
f1();
getch();
}