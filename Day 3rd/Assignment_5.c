#include<stdio.h>
int main()
{
    int sum=0;
for(int i=2;i<=100;i=i+2)
{
   sum=sum+i;
   if(i!=100)
   {
   printf("%d+",i);
}
else{
    printf(" = %d",sum);
}
}
//printf("\nSum is = %d",sum);
return 0;
}