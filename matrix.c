#include<stdio.h>
int main()
{
   int mat1[3][3],mat2[3][3],sum[3][3],i,j;
   printf("First matrix input \n");
   for (int i=0;i<3;i++)
   {
    for (int j=0;j<3;j++)
    {
       scanf("%d",&mat1[i][j]);
    }
   }
  printf("First matrix is \n");
   for (int i=0;i<3;i++)
   {
    for (int j=0;j<3;j++)
    {
       printf("%d \t",mat1[i][j]);
    }
    printf("\n");
   }
     printf("Second matrix input \n");
     for (int i=0;i<3;i++)
   {
    for (int j=0;j<3;j++)
    {
       scanf("%d",&mat1[i][j]);
    }
   }
  printf("Second matrix is \n");
   for (int i=0;i<3;i++)
   {
    for (int j=0;j<3;j++)
    {
       printf("%d \t",mat1[i][j]);
    }
    printf("\n");
   }

  
   for (int i=0;i<3;i++)
   {
     sum[i][j]=0;
    for (int j=0;j<3;j++)
    {
    
       sum[i][j]=mat1[i][j]+mat2[i][j];
    }
 
   }
   printf("Sum of  \n");
    for (int i=0;i<3;i++)
   {
   
    for (int j=0;j<3;j++)
    {
        printf("%d\t",sum[i][j]);
    }
    printf("\n");
   }


return 0;
   
}