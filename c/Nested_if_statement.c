//wap in c to check less num between 3
#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter first num ");
    scanf("%d",&x);
     printf("Enter sec num ");
    scanf("%d",&y);
     printf("Enter third num ");
         scanf("%d",&z);
    if(x>y)
    {
        if(y>z)//{
            printf("%d is less num",z);
       // }
        else
       // {
            printf("%d is less than",y);
       // }
    
    
}
else{
    printf("%d is less num",x);
}
return 0;
}