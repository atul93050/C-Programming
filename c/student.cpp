//wap in c to use of structure display some record.
#include<stdio.h>
#include<conio.h>
//create a structure with student name..
struct student
{
	char name[40];
	char branch[100];
	char college[200];
	char city[50];
}s;
void main()
{
	printf("Enter student information details record:\n)");
	printf("\nEnter student name:");
	gets(s.name);
	printf("\nEnter student branch:");
	gets(s.branch);
	printf("\nEnter student college:");
	gets(s.college);
	printf("\nEnter student city:");
	gets(s.city);
	clrscr();
	printf("Enter above student information**********----------++++++");
	printf("\nEnter student name:"s.name);
		printf("\nEnter student branch:"s.branch);
	printf("\nEnter student college:"s.college);
	printf("\nEnter student city:"s.city);
	getch();
}


