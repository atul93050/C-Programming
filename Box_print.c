#include<stdio.h>
int main()
{
    int x,y;
    printf("value of row and column \n");
    scanf("%d%d",&x,&y);
    for(int i=0;i<=x;i++)
    {
        for(int j=0;j<=y;j++)
        {
if(i==1||i==x)
{
   
    printf(" * ");
    
}
else if(j==1||j==y)
{
   
    printf(" * ");
    
}

else{
    printf(" ");
}
        }
       printf("\n");
    }
}