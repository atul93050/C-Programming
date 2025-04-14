#include<stdio.h>
int main()
{
    int Phy,Chem,Bio,Math,Comp,percent;
    printf("\nEnter your Physics Marks = ");
    scanf("%d",&Phy);
    printf("\nEnter your Chemistry Marks = ");
    scanf("%d",&Chem);
    printf("\nEnter your Biology Marks = ");
    scanf("%d",&Bio);
    printf("\nEnter your Mathematics Marks = ");
    scanf("%d",&Math);
    printf("\nEnter your Computer Marks = ");
    scanf("%d",&Comp);
    percent=(Phy+Chem+Bio+Math+Comp)/5;
    if (percent<40)
    {
        printf("\nGrade F");
    }
       else if (percent>=40)
    {
        printf("\nGrade E");
    }
       else if (percent>=60)
    {
        printf("\nGrade D");
    }
     else if (percent>=70)
    {
        printf("\nGrade C");
    }
    else if (percent>=80)
    {
        printf("\nGrade B");
    }
    else if (percent>=90)
    {
        printf("\nGrade A");
    }
    return 0;
       

    

    
}