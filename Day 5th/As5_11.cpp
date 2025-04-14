#include<stdio.h>
#include<conio.h>
#include<string.h>
void f1()
{
char x[10];
printf("Enter a word = \n");
scanf("%s",x);
strlen(x);
printf("\nlength = %d",strlen(x));
}
void main()
{
clrscr();
f1();
getch();
}