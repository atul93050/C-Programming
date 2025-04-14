#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
	int i;
	clrscr();
	for(i=20;i<=2000;i+20)
	{
		sound(i);
		delay(25);
	}
	nosound();
	getch();
}
	