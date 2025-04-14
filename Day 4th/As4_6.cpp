//wap in c to print all neg num
#include<stdio.h>
#include<conio.h>
void main()
{
int i,x[10];
clrscr();
printf("Enter element of array\n");
for(i=0;i<10;i++)
{
scanf("%d",&x[i]);
}
for(i=0;i<10;i++)
{
if(x[i]<0)
{
printf("\n%d is a neg num",x[i]");
}
}
getch();
}
