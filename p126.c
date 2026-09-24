//Deletion Element
#include<stdio.h>
int main()
{
    int n,k,i;
    int num[10]={1,2,3,4,5,6,7,8,9,10};
    
    printf("Befor deletion");
    for(i=0;i<10;i++)
    printf(" %d ",num[i]);

    printf("\nEnter index");
    scanf("%d",&n);

    for(i=n;i<10;i++)
    {
        num[i]=num[i+1];
    }

    printf("After Deletion");
    for(i=0;i<9;i++)
    printf(" %d ",num[i]);

    return 0;
}