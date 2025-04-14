#include<stdio.h>
int main()
{
    int a,b,c,max;
    printf("Enter the value of a, b and c ");
    scanf("%d%d%d",&a,&b,&c);
    max=(a>b&&b>c)?a:(b>c&&b>a)?b:c;
    printf("The max num is = %d",max);
    return 0;
    

}