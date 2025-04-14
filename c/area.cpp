//wap in c to check area of circle,circumference
#include<stdio.h>
#include<conio.h>
void area()
{
int r;
printf("enter radius of circle: ");
scanf("%d",&r);
printf("\nArea of circle is %f\nCircumference is %f",3.14*r*r,2*3.14*r);
}
void main()
{
clrscr();
area();
getch();
}
