#include<stdio.h>
int main()
{
    float basic_salary,da,hra,gross_salary;
    printf("\ninput the basic salary of employee");
    scanf("%f",&basic_salary);
    if(basic_salary<=10000)
    {
     da=(basic_salary*80)/100;
     //printf("\nDA is =%f",da);
     hra=(basic_salary*20)/100;
      //printf("\nthe HRA is =%f",hra);
    //gross_salary=basic_salary+da+hra;
   // printf("\nthe gross salary is %f",gross_salary);
    }
    else if(basic_salary>=10001 && basic_salary<=20000)
    {
        da=(basic_salary*90)/100;
       // printf("\nthe DA is =%f",da);
        hra=(basic_salary*25)/100;
      //  printf("\nthe HRA is =%f",hra);
       // gross_salary=basic_salary+da+hra;
       // printf("\nthe gross salary is %f",gross_salary);
    }
    else if(basic_salary>=20001)
    {
        da=(basic_salary*95)/100;
        //printf("\nthe DA is =%f",da);
        hra=(basic_salary*30)/100;
        // printf("\nthe HRA is =%f",hra);
       // gross_salary=basic_salary+da+hra;
       // printf("\nthe gross salary is %f",gross_salary);
    }
 printf("\nthe DA is =%f",da);
        
        printf("\nthe HRA is =%f",hra);
       gross_salary=basic_salary+da+hra;
       printf("\nthe gross salary is %f",gross_salary);
    
  return 0;
}