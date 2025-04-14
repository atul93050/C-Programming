//wap in c to check profit and loss..
#include<stdio.h>
int main()
{
    int cost_price,selling_price,profit,loss;
    printf("Enter your cost_price");
    scanf("%d",&cost_price);
    printf("Enter your selling_price");
    scanf("%d",&selling_price);
    if (selling_price>cost_price)
    {
        profit=selling_price-cost_price;
        printf("%d rs is your profit",profit);
    }
    else if (selling_price<cost_price)
    {
        loss=cost_price-selling_price;
        printf("%d rs is your profit",loss);
    }
    else
    {
        printf("No profit no loss");
    }
    return 0;

}