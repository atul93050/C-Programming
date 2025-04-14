#include<stdio.h>
int main()
{
    char x;
    printf("Enter a character");
    scanf("%c",&x);
    if(x>='A')
    {
        if (x<='Z')
        {
            printf("\n%c is uppercase character.",x);
        
        }
        else if (x>='a'&&x<='z')
        {
            printf("\n%c is lowercase character.",x);
        
        }
        
        
    }
    return 0;
}