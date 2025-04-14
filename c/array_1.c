//wap a program in c to display 2*2
#include<stdio.h>
int main()
{
    int x[2][2],a[2][2],Z[2][2];
    for(int i=0;i<2;i++) // input for first matrix
    {
        for(int j=0;j<2;j++)
        {
            printf("Value");
        scanf("%d",&x[i][j]);
        }
    }
    printf("first matrix");
       for(int i=0;i<2;i++) // printing for first matrix
    {
        for(int j=0;j<2;j++)
        {
         printf("%d\t",x[i][j]);
        }
        printf("\n");
    }
     for(int i=0;i<2;i++)   // input value for second matrix
    {
        for(int j=0;j<2;j++)
        {
            printf("Value");
        scanf("%d",&a[i][j]);
        }
    }
    printf("Second matrix is : ");
       for(int i=0;i<2;i++)    // printing second matrix
    {
        for(int j=0;j<2;j++)
        {
    printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
        for(int i=0;i<2;i++) // addition of two matrix
    {
        for(int j=0;j<2;j++)
        {
            Z[i][j]=a[i][j]+x[i][j];

        }
    }
     printf("Sum matrix is : ");
       for(int i=0;i<2;i++) // printing sum of two matrix
    {
        for(int j=0;j<2;j++)
        {
    printf("%d\t",Z[i][j]);
        }
        printf("\n");
    }
    return 0;

}