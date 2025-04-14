//wap in c to convert any string to lowercase 
#include<stdio.h>
#include<conio.h>
#include<string.h>
void f1()
{
char x[10];
printf("Enter a word = \n");
scanf("%s",x);
strlwr(x);
printf("\nlowercase is %s",x);
}
void main()
{
clrscr();
f1();
getch();
}