#include<stdio.h>
int main()
{

int row;
    printf("Enter num of rows ");
    scanf("%d",&row);
    for (int i=0;i<=row;i++)
    {

        for(int j=0;j<=i;j++)
     {
           
             printf("*");
              for(int k=(row/2)+1;k>=1;k--)
            {
                printf("  ");
            }
         
        }
       
        printf("\n");

    }
return 0;
}