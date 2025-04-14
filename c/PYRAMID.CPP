#include<stdio.h>
#include<conio.h>
void main()
{
int x;
clrscr();
printf("Enter a num = ");
scanf("%d",x);
for(int i=0;i<=x;i++)
{
    for(int j=0;j<=i;j++)
    {
    printf(" * ");
    }
printf("\n");
}
getch();
}