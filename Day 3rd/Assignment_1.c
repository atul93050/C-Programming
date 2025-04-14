#include<stdio.h>
int main()
{
    char x='Z';
    do
    {
        printf("%c,",x);
        x--;    
    } 
    while (x>='B');
    return 0;
}