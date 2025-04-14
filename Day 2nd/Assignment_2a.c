#include<stdio.h>
int main()
{
    char x;
   // int x;

    printf("Enter any char \n");
    scanf("%d",&x);
   // x=(int)ch;
    if(x>=65&&x<=90)
    {
        printf(" %c is a aphabet",x);
    }
    else if(x>=97&&x<=122)
    {
        printf(" %c is a alphabet",x);
    }
    else if(x>=48&&x<=57)
    {
 printf("%c is a num digit",x);
    }
    else{
        printf("%c Num Special character",x);
    }
    return 0;
}