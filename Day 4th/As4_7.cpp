//Wap in c to count total num of even and odd element in an array 
#include<stdio.h>
#include<conio.h>
void main()
{
int x[10],i,odd=0,even=0;
clrscr();
printf("input num : ");
for(i=0;i<10;i++)
{
scanf("%d",&x[i]);
}
for(i=0;i<10;i++)
{
if(x[i]%2==0)
{
even++;
}
else
{
odd++;
}
}
printf("\nTotal odd num is %d",odd);
printf("\nTotal even num is %d",even);
getch();
}