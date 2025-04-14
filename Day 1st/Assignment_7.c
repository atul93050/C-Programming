#include<stdio.h>
int main()
{
    int a;
    printf("Enter a integer num = ");
    scanf("%d",&a);
    (a%2==0)?printf("The num %d is even",a):printf("The num %d is Odd",a);
    return 0;
}