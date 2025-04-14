//wap in c to copy all elements from an array to another array
#include<stdio.h>
#include<conio.h>
void main()
{
int x[10],y[10],i;
clrscr();
printf("Enter num in first array = \n");
for(i=0;i<10;i++)
{
scanf("%d",&x[i]);
}
printf("Copy element to another array \n");
for(i=0;i<10;i++)
{
y[i]=x[i];
printf("\n %d value is %d",i,y[i]);
}
getch();
}

 