//wap in c to check even odd by using function
#include<stdio.h>
#include<conio.h>
void num()
{
int num;
printf("\nEnter a num = ");
scanf("%d",&num);
if(num%2==0)
{
printf("\n%d is a even num",num);
}
else
{
printf("\n%d is a odd num",num);
}
}
void main()
{
clrscr();
num();
getch();
}