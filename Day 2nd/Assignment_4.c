#include<stdio.h>
int main()
{
    int AB,BC,CA;
    printf("\nEnter triangle side AB = ");
    scanf("%d",&AB);
    printf("\nEnter triangle side BC = ");
    scanf("%d",&BC);
    printf("\nEnter triangle side CA = ");
    scanf("%d",&CA);
    if (AB==BC)
    {
        if(BC==CA)
        {
            printf("\nThe triangle is a Equilateral Triangle");

        }
        else if(AB==BC||(BC==CA)||(CA==AB))
        {
             printf("\nThe triangle is a Isosceles Triangle");
        }
    }
    else{
         printf("\nThe triangle is a Scalene Triangle");
    }
    return 0;
}