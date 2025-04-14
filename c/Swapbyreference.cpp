//call by reference
#include<stdio.h>
#include<conio.h>
void swap(int *x,int *y);
void main()
{
int x,y;
printf("Enter two value");
scanf("%d%d",&x,&y);
swap(&x,&y);

getch();
}
void swap(int *x,int *y)
{
int t;
*t=*x;
*y=*x;
*x=*t;
printf("after swapping x=%u,y=%u",*x,*y);
}