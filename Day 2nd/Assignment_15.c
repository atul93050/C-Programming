#include<stdio.h>
int main()
{
    int x,y;
    printf("\nEnter x coordinate = ");
    scanf("%d",&x);
     printf("\nEnter y coordinate = ");
    scanf("%d",&y);
    if(x>0)
    {
        if (y>0)
        {
            printf("\n(%d,%d) is in I quadrant",x,y);

        }
        else if (x<0&&y>0)
    {
        printf("\n(%d,%d) is in II Quadrant",x,y);
    }
    else if (x<0&&y<0)
    {
        printf("\n(%d,%d) is in III Quadrant",x,y);
    }
else 
    {
        printf("\n(%d,%d) is in IV Quadrant",x,y);
    }
    return 0;
        
    }
    
}