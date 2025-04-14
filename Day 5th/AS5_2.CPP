//wap in c to multiplication of two num using udf
#include<stdio.h>
#include<conio.h>
void f1()
{
int x,y;
printf("Enter two num = \n");
scanf("%d%d",&x,&y);
printf("\nMul of num is = %d\n",x*y);
}
void f2(int x,int y)
{
	
	printf("\nMul of num is = %d\n",x*y);
}
int f3()
{
	int x,y;
	printf("\nEnter two num =\n");
	scanf("%d%d",&x,&y);
	return x*y;
}
int f4(int x,int y)
{
	return x*y;
}
void main()
{
	int a,b,r;
	clrscr();
	f1();
	printf("\nEnter two num =\n");
	scanf("%d%d",&a,&b);
	f2(a,b);
	
	r=f3();
	printf("\nMul of num is = %d",r);
	printf("\nEnter two num =\n");
	scanf("%d%d",&a,&b);
	r=f4(a,b);
	printf("\nMul of num is = %d",r);
	getch();
}
	
	

