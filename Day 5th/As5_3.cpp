 //wap in c to read two strings and concatenate the strings
#include<stdio.h>
#include<conio.h>
#include<string.h>
void f1()
{
	char a[20],b[20];
	printf("Enter two word = \n");
	scanf("%s%s",a,b);
	strcat(a,b);
	printf("\nConcatenate the string is = %s\n",a);
}
void f2(char a[20],char b[20])
{
	strcat(a,b);
	printf("\nConcatenate the string is = %s\n",a);
}
char f3()
{
	char a[20],b[20];
	printf("Enter two word\n");
	scanf("%s%s",a,b);
	strcat(a,b);
	return 'c';
}
char f4(char a[20],char b[20])
{
	strcat(a,b);
	return 'a[20]';
}
void main()
{
	char x[20],y[20],r;
	clrscr();
	f1();
	printf("Enter two word = \n");
	scanf("%s%s",x,y);
	f2(x,y);
	r=f3();
	printf("\nConcatenate of two word is = %s",r);
	printf("Enter two word = \n");
	scanf("%s%s",x,y);
	r=f4(x,y);
	printf("\nConcatenate of two word is = %s",r);
	getch();
}

	
	
	