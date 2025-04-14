#include<stdio.h>
int main()
{
    int x,div=0;
    printf("Enter a num = ");
    scanf("%d",&x);
    for(int i=1;i<x;i++)
    {
  
if(x%i==0)
{
   
    printf("%d+",i);
   
    div=div+i;
}

    }
    if(div==x)
    {
        printf("\nsum = %d\nThe num is perfect num",div);
    }
    else 
    {
         printf("\n sum = %d\nThe num is not perfect num",div);
    }
    return 0;
}