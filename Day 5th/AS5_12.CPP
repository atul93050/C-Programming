#include<stdio.h>
#include<conio.h>
#include<string.h>
void compare()
{
char ch[20],a[20];
int result;
printf("\nEnter two word = ");
scanf("%s%s",ch,a);
result=strcmp(ch,a);
if(result==0)
{
printf("Both are equal word");
}
else
{
printf("Both are not equal word");
}

}
void main()
{
clrscr();
compare();
getch();
}