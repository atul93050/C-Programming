#include<stdio.h>
int main()
{
    int x,rev=0,org;
    printf("\nEnter number");
    scanf("%d",&x);
org=x;
    while (x!=0)
    {
    rev=rev*10+x%10;
x=x/10;
    
    }
    printf("reverse num is %d",rev);
    if(org==rev)
    {
        printf("\nThe num is palindrome");
    }
    else
     {
        printf("\nThe num is not palindrome");
    }
    return 0;
}