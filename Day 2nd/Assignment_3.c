#include<stdio.h>
int main()
{
    char x;                     
    printf("\nEnter a character = ");
    scanf("%c",&x);                     
    if(x>='a')                     
    {                     
        if(x<='z')                     
        {                     
            printf("\nAlphabet");                     
        }
        else if(x>='A'&&x<='Z')
        {
            printf("\nAlphabet");
        }
    }
    else
    {
        printf("\nNot Alphabet");
    }
    return 0;
    
}