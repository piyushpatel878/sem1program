// Profit/Loss Calculator   
#include<stdio.h>
int main()
{
    char enternameofproduct[100];
    float profit,loss, price,finalpriceforprofit ,finalpriceforloss;
    printf("enter name of product:");
    scanf("%99s", enternameofproduct);
    printf("enter price of product:");
    scanf("%f", &price);
    printf("enter profit percentage of product:");
    scanf("%f", &profit);
    printf("enter loss percentage of product:");
    scanf("%f", &loss);
    profit = (price*profit)/100;
    loss = (price*loss)/100;
    finalpriceforprofit = profit+price;
    finalpriceforloss= price-loss;
    if(profit>0){
    printf("profit %f",finalpriceforprofit);
}
    else if(loss>0)
    {
    printf("loss %f",  finalpriceforloss);
    }
    return 0;
}