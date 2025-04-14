//wap in c to find of power of a num using function
#include<stdio.h>
#include<conio.h>
void f1()
{
int x,c=1,i;
printf("Enter a num = \n");
scanf("%d",&x);
for(i=0;i<3;i++)
{
c=c*x;
}
printf("\nCube of %d is %d ",x,c);
}
void f2(int x)
{
	int c=1,i;
	
	
	for(i=0;i<3;i++)
	{
		c=c*x;
	}
	printf("\nCube of %d is %d",x,c);
	
}
int f3()
{
	int x,c=1,i;
	printf("\nEnter a num : ");
	scanf("%d",&x);
	for( i=0;i<3;i++)
	{
		c=c*x;
	}
	return c;
}
int f4(int x)
{
	int i,c=1;
	for(i=0;i<3;i++)
	{
		c=c*x;
	}
	return c;
}
void main()
{
	int x,c;
clrscr();
f1();
printf("\nEnter a num: ");
	scanf("%d",&x);
f2(x);
c=f3();
printf("cube of num is %d",c);
printf("\nEnter a num: ");
	scanf("%d",&x);
	c=f4(x);
printf("cube of num is %d",c);
	
getch();
}