//wap in c to find cube of a number using function
#include<stdio.h>
#include<conio.h>
#include<math.h>
void power()
{
int x;
printf("Enter num = \n");
scanf("%d",&x);
printf("\nCube of %d is = %d",x,pow(x,x));
}
void main()
{
clrscr();
cube();
getch();
}