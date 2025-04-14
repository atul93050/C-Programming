#include<stdio.h>
#include<conio.h>
void main()
{
    int x[10],c,i;
	clrscr();
    printf("Enter num ");
    for(i=0;i<10;i++)
    {
	scanf("%d",&x[i]);
    }
    printf("Enter new num");
      scanf("%d",&c);

    for(i=0;i<=10;i++)
    {
        x[10]=c;
        printf("%d\n",x[i]);
       
    }
	getch();
	}