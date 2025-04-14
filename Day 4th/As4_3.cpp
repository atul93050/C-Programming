//wap in c to count total number of negative elements in array
#include<stdio.h>
#include<conio.h>
void main()
{
int x[10],i,count=0;
clrscr();
printf("\nEnter num");
for(i=0;i<10;i++)
{
scanf("%d",x[i]);
}
for(i=0;i<10;i++)
{
if(x[i]<0)
{
count++;
}
}
printf("\nTotal negative num is = %d",count);
getch();
}
