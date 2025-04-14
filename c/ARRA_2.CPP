//wap a program in c to display 2*2
#include<stdio.h>
#include<conio.h>
void main()
{

    int x[2][2],i,j;
	clrscr();

    for(i=0;i<2;i++)
    {
	for(j=0;j<2;j++)
	{
	   printf("Value");
	scanf("%d",&x[i][j]);
	}
    }

       for(i=0;i<2;i++)
    {
	for(j=0;j<2;j++)
	{
    printf("%d\t",x[i][j]);
	}
	printf("\n");
    }
   getch ();

}