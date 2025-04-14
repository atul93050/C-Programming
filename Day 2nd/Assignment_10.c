#include<stdio.h>
int main()
{
    int x,note_500,perform_amount;
    printf("Enter amount = ");
    scanf("%d",&x);
    if(x>500)
    {
        note_500=x/500;
        perform_amount=x-(note_500*500);
        printf("\n %d, note of 500, \n%d rs, perform amount",note_500,perform_amount);
    }
    else
    {
        printf("\n%d, perform amount");
    }
    return 0;
}