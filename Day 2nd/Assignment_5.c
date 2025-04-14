#include<stdio.h>
int main()
{
    int x,y,a,num;
    printf("Enter 1 to sum, 2 to subtract, 3 to check even/odd = ");
    scanf("%d",&a);
    if(a==1)
    {
      printf("\nEnter first num = ");
      scanf("%d",&x);
      printf("\nEnter second num = ");
      scanf("%d",&y);
      printf("\n Sum = %d",x+y);
    }
    else if(a==2)
     {
       printf("\nEnter first num = ");
       scanf("%d",&x);
       printf("\nEnter second num = ");
       scanf("%d",&y);
       printf("\n Sub = %d",x-y); 
     }
         else if (a==3)
          {
            printf("\nEnter num = ");
            scanf("%d",&num);
            if(num%2==0)
             {
                 printf("\n Number is even");
             }
             else{
                   printf("\nNumber is odd");
                 }
    
          }
    
    else
    {
        printf("\nPlease enter a valid num");
    }
    return 0;
}