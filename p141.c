//insertion Element
#include<stdio.h>
int main()
{
    int i,n,k;
    int num[10]={1,2,3,4,5,6,7,8};

    printf("befor insertion:");
    for(i=0;i<8;i++)
    printf(" %d ",num[i]);

    //taking input
    printf("\nEnter index:");
    scanf("%d",&n);
    printf("enter number:");
    scanf("%d",&k);

    //shifting value
    for(i=7;i>n;i--)
    {
        num[i]=num[i-1];
    }
    num[n]=k;

    printf("After insertion:");

    for(i=0;i<9;i++)
    printf(" %d ",num[i]);

    return 0;
}