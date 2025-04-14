//wap in c to check parameter of rectangle
#include<stdio.h>
#include<conio.h>
void parameter()
{
int a,b;
printf("Enter value of length and height of rectangle : ");
scanf("%d%d",&a,&b);
printf("\n Parameter of rectangle : %d",2*(a+b));
}
void main()
{
clrscr();
parameter();
getch();
}