//wap in c to multiply of two matrix
#include<stdio.h>
#include<conio.h>
void main()
{
int x[3][3],y[3][3],mul[3][3],i,j;
clrscr();
printf("Enter first matrix values= \n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	scanf("%d",&x[i][j]);
	}
}
printf("\nThe first matrix is = \n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	printf("%d\t",x[i][j]);
	}
	printf("\n");
}
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	scanf("%d",&y[i][j]);
	}
}
printf("\nThe Second matrix is = \n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	printf("%d\t",y[i][j]);
	}
	printf("\n");
}	

for(i=0;i<3;i++)
{
	mul[i][j]=0;
	for(j=0;j<3;j++)
	{
		mul[i][j]=mul[i][j]+x[i][j]*y[j][i];
	}
}
printf("\nThe multiply of matrix is  matrix is = \n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("%d\t",mul[i][j]);
	}
	printf("\n");
}
getch();
}	


 