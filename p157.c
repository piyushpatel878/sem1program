//inventory list 
#include<stdio.h>
int main()
{
    int i;
    int num[5];
    char pro[5][20];
    
    printf("====Inventory list====\n");
    printf("Enter 5 products:\n");
    
    for(i=0;i<5;i++)
    {
        printf("product :\n");
        scanf("%s",pro[i]);
        printf("Quantity:\n");
        scanf("%d",&num[i]);
    }
    printf("Inventory\n");
    printf("Product\tQuantity\n");
    
    for(i=0;i<5;i++)
    printf("%s   \t%5d\n",pro[i],num[i]);
    
    return 0;
}