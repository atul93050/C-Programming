#include<stdio.h>
int main()
{
    int unit,total_electricity_bill,electricity_bill;
    printf("\nEnter the electricity unit charge = ");
    scanf("%d",&unit);
    if(unit<=50)
    {
        electricity_bill=(unit*0.50);
       
    }
    else if (unit<=100)
    {
        electricity_bill=(unit-50)*0.75+(50*0.5);

    }
    else if (unit<=250)
    {
        electricity_bill=((unit-100)*1.2)+(50*0.5+50*0.75);
         
    }
else if (unit>250)
 {
    electricity_bill=((unit-250)*1.5)+50*0.5+50*0.75+150*1.2;
      
 }
total_electricity_bill=electricity_bill+(electricity_bill*20/100);
printf("\nTotal electricity bill is = %d Rs",total_electricity_bill);
 return 0;
}