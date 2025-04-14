//wap in c to count total duplicate elements in array
#include<stdio.h>
#include<conio.h>
void main()
{
int x[10],i,dup=0,j;
clrscr();
printf("Enter Num = \n");
for(i=0;i<10;i++)
{
scanf("%d",&x[i]);
}
for(i=0;i<10;i++)
{
for(j=i+1;j<10;j++)
{
if(x[i]==x[j])
{
dup++;
printf("%d is a duplicate num");
break;
}
}
}
printf("\n Total duplicate elements is %d",dup);
getch();
}
