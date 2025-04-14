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
void f2(int num)
{
	
if(num%2==0)
{
printf("\n%d is a even num",num);
}
else
{
printf("\n%d is a odd num",num);
}
}
int f3()
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
return 0;
}
int f4(int num)
{
	if(num%2==0)
{
printf("\n%d is a even num",num);
}
else
{
printf("\n%d is a odd num",num);
}
return 0;
}

	
void main()
{
int n;
clrscr();
num();
printf("\nEnter a num = ");
scanf("%d",&n);
f2(n);
f3();
printf("\nEnter a num = ");
scanf("%d",&n);
f4(n);
getch();
}