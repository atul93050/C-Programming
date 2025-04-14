//wap in c to find simple interest , profit loss,max three num using udf
#include<stdio.h>
#include<conio.h>
void Si()
{
int p,r,t;
printf("\nEnter the value of principle,time and rate: ");
scanf("%d%d%d",&p,&t,&r);
printf("\nSimple interest is : %d",p*r*t/100);
}
void profit()
{
int sp,cp;
printf("\nEnter the selling price and cost price");
scanf("%d%d",&sp,&cp);
if(sp>cp)
{
printf("\n profit is : ",sp-cp);
}
else
{
printf("\n loss is : %d",cp-sp);
}
}
void max()
{
int a,b,c;
printf("Enter three num : \n");
scanf("%d%d%d",&a,&b,&c);
if(a>b && b>c)
{
printf("\n%d is greater num.",a);
}
else if(b>a && b>c)
{
printf("\n%d is greater num",b);
}
else{
printf("\n%d is greater num",c);
}
}

void main()
{
clrscr();
Si();
profit();
max();
getch();
}
