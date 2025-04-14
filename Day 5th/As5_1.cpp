//wap in c to use of all udf check Simple Interest Number
#include<stdio.h>
#include<conio.h>
void f1()
{
	int p,r,t;
	printf("Enter the value of principle, rate and time=\n");
	scanf("%d%d%d",&p,&r,&t);
	printf("\nSimple Interest is = %d\n",p*r*t/100);
}
void f2(int p, int r, int t)
{
	int si;
	si=p*r*t/100;
	printf("\nSimple interest is = %d\n",si);
}
int f3()
{
	int p,r,t,si;
	printf("Enter the value of principle, rate and time=\n");
	scanf("%d%d%d",&p,&r,&t);
	si=p*r*t/100;
	return si;
}
int f4(int p,int r,int t)
{
	int si;
	si=p*r*t/100;
	return si;
}
void main()
{
	int p,r,t,a,b,c,si,result;
	clrscr();
	f1();
	printf("Enter the value of principle, rate and time=\n");
	scanf("%d%d%d",&p,&r,&t);
	f2(p,r,t);
	si=f3();
	printf("\nSimple interest is = %d\n",si);
	
	printf("Enter the value of principle, rate and time=\n");
	scanf("%d%d%d",&a,&b,&c);
	result=f4(a,b,c);
	printf("\nSimple interest is = %d\n",result);
	getch();
}
	
	
	
	
	


