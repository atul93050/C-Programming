#include<stdio.h>
int main()
{
    int math,eng,hindi,chem,phy,total_marks;
    printf("\nEnter the num of math  = ");
    scanf("%d",&math);
    printf("\nEnter the num of eng   = ");
    scanf("%d",&eng);
    printf("\nEnter the num of hindi = ");
    scanf("%d",&hindi);
    printf("\nEnter the num of chem  = ");
    scanf("%d",&chem);
    printf("\nEnter the num of phy   = ");
    scanf("%d",&phy);
    total_marks=math+eng+hindi+chem+phy;
    printf("Average = %d",total_marks/5);
    printf("\n percentage = %d ",total_marks*100/500);
   // printf("math = %d,\neng = %d,\nhindi = %d,\nchem = %d,\nphy = %d",math*100/total_marks,eng*100/total_marks,hindi*100/total_marks,chem*100/total_marks,phy*100/total_marks);
return 0;
}