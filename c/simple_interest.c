#include<stdio.h>
int main()
{
    float si,p,r,t;
    printf("enter the value of principal");
    scanf("%f",&p);
     printf("enter the value of rate");
    scanf("%f",&r);
     printf("enter the value of time");
    scanf("%f",&t);
     printf("enter the value of simple interest is = %f",p*r*t/100);
    return 0;

}