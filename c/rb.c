//wap in c to insert one element by using 1D array
#include<stdio.h>
int main()
{
    int x[10],c;
    printf("Enter num ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("Enter new num");
      scanf("%d",&c);
  
    for(int i=0;i<=10;i++)
    {
        x[10]=c;
        printf("%d\n",x[i]);
       
    }
   
    return 0;
}