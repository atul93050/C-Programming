//wap in c to use of call by value check swap num using udf
#include<stdio.h>
void swap(int *x,int *y);
int main()
{
    int a,b;
    printf("Enter value of a and b");
    scanf("%d%d",&a,&b);
    printf("before swaping a=%d,b=%d\n",a,b);
    swap(a,b);
     
     return 0;

}
void swap(int *x,int *y)
{
    int t;
    t=*x;
    x=*y;
    y=t;

    
    printf("After swaping a=%u,b=%u",x,y);
   
}