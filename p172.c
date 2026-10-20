//Inventory Database
#include<stdio.h>
struct Inv{
    char pro[100];
    int pi,qu;
    float ppu;
};

int main()
{
    struct Inv h;
    float total=0;
    printf("Enter product ID:");
    scanf("%d",&h.pi);
    printf("Enter product name:");
    scanf("%99s",h.pro);
    printf("Enter quantity:");
    scanf("%d",&h.qu);
    printf("Enter price per unit:");
    scanf("%f",&h.ppu);

    total=h.qu*h.ppu;
    printf("----- Inventory Record -----\n");
    printf("Product ID:%d\n",h.pi);
    printf("Product Name:%s\n",h.pro);
    printf("Quantity:%d\n",h.qu);
    printf("Price per Unit:%.2f\n",h.ppu);
    printf("Total Stock Value:%.2f",total);

    return 0;
}