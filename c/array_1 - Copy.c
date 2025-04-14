//wap a program in c to display 2*2 sum of two array
#include<stdio.h>
int main()
{
    int x[2][2],a[2][2],Z[2][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("Value");
        scanf("%d",&x[i][j]);
        }
    }
    printf("first matrix\n");
       for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
    printf("%d\t",x[i][j]);
        }
        printf("\n");
    }
     for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("Value");
        scanf("%d",&a[i][j]);
        }
    }
    printf("Second matrix is : \n");
       for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
    printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
        for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            Z[i][j]=a[i][j]+x[i][j];

        }
    }
     printf("Sum matrix is : \n");
       for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
    printf("%d\t",Z[i][j]);
        }
        printf("\n");
    }


    return 0;

}