#include<stdio.h>
#include<math.h>
int main()
{
    float si,p,r,t,A,CI;
    printf("enter the value of principal = ");
    scanf("%f",&p);
     printf("\nenter the value of rate = ");
    scanf("%f",&r);
     printf("\nenter the value of time = ");
    scanf("%f",&t);
     
     A=p*(pow((1+r/100),t));
     CI=A-p;
     printf("\nenter the value of amount is = %f",A);
      printf("\nenter the value of compound interest is = %f",CI);
    return 0;

}