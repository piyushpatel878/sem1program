// Sum of series=1+1/2+1/3......1/n
#include<stdio.h>
int main()
{
    int n;
    float sum=0.0,i;
    printf("Enter number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    sum=sum+(1.0/i);
    printf("Sum of series=%f",sum);
    return 0;}