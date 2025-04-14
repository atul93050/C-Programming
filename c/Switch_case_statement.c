//wap in c to use of switch statement
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'A':
        printf("A for Apple");
        break;
        case 'B':
        printf("B for Boy");
        break;
        case 'G':
        printf("G for Girl");
        break;
        default:
        printf("Plz Enter valid character");
        break; 
    }
    return 0;
}