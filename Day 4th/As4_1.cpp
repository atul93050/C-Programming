//Wap in c to print sum of all array element
#include<stdio.h>
#include<conio.h>
void main()
{
int n,a[100],i,sum=0;
clrscr();
printf("Enter size of array = ");
scanf("%d",&n);
printf("Enter num = \n");
for( i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
printf("\nSum is = %d",sum);
getch();
}
