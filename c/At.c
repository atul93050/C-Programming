//wap in c to use of else if
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character value");
    scanf("%c",&ch);
    if(ch=='R')
    {
        printf("Risabh is a smart boy: \n");
    }
    else if(ch=='a')
    {
        printf("Avnish is a smart boy: \n");
    }
    else if(ch=='p')
    {
        printf("prashant is a smart boy: \n");
    }
    else
    {
        printf("invalid : \n");
    }
    return 0;

    
}