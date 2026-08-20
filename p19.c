//Discount Calculator 
#include<stdio.h>
int main()
{
    char name[100];
    float product, productprice,Discount,Finalprice;
    printf("enter name of product:");
    scanf("%99s",name);
    printf("enter price of product:");
    scanf("%f", &productprice);
    printf("enter Discount percentage of product:");
    scanf("%f",&Discount);
    Discount = (productprice*Discount)/100;
    Finalprice=productprice -  Discount;
    printf("final price of product:%f",Finalprice);
    return 0;
}