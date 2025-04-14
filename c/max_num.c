//program to print maximum num between three variables
#include<stdio.h>
int main()
{
    int a,b,c,max;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    printf("enter the value of c");
    scanf("%d",&c);
    max=(a>b&&a>c)?a:(b>a&&b>c)?b:c;
    printf(" max num =%d",max);
    return 0;
}