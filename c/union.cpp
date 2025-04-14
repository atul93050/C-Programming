//difference between union & structure using c program....
#include<stdio.h>
#include<conio.h>
//create a structure 
struct student
{
char name[20];
char branch[100];
char college[80];
}s;
//create a union
union information
{
char name[20];
char branch[100];
char college[80];
}u;
void main()
{
	clrscr();
	printf("Size of structure is %d\n",sizeof(s));
	printf("Size of union is %d",sizeof(u));
	getch();
}
