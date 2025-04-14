//wap in c to use of pointer to check address of variable from memory 
//using pointer
#include<stdio.h>
#include<conio.h>
void main()
{
int a,*p;
clrscr();
printf("Enter a num=");
scanf("%d",&a);
p=&a;
printf("Address of pointer a=%u",p);
printf("Value of a=%d",*p);
getch();
}