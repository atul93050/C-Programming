#include<stdio.h>
int main()
{
    int row,space;
    printf("Enter num of rows ");
    scanf("%d",&row);
    for (int i=0;i<row;i++)
    {
 for(space=1;space<=row-i;space++)
            {
                printf(" ");
            }
        for(int j=0;j<i*2-1;j++)
        {
             printf("*");
        }
       
        printf("\n");

    }
    return 0;
    
}