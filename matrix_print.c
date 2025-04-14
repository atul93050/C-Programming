//wap in c to find sum of each row and columns of matrix
#include<stdio.h>
int main()
{
int x[3][3],y[3][3],sum[3][3],i,j;

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
	sum[i][j]=0;
	for(j=0;j<3;j++)
	{
		sum[i][j]=x[i][j]+y[j][i];
	}
}
printf("\nThe sum of matrix is  matrix is = \n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("%d\t",sum[i][j]);
	}
	printf("\n");
}
return 0;
}	


 