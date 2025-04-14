//wap in c if your age is greater than or equal to 25 and weight is greater than 50
#include<stdio.h>
int main()
{
int x,y;
printf("\nEnter your age = ");
scanf("%d",&x);
printf("\nEnter your weight = ");
scanf("%d",&y);
if(x>=25)
{
    if (y>50)
    {
        printf("you are eligible for blood donation");
    
    }
    else
        {
          printf("you are not eligible for blood donation");
        }
    
}
else{
    printf("you are under age");
}
return 0;
}