//sum of given digit
#include<stdio.h>
int main()
{
    int i,n, sum=0,r;
    printf("Enter your number:");
    scanf("%d",&n);
    for(i=0;n>0;n/10)
    {
        r=n%10;
        sum = sum +r;
        n=n/10;
    }
    printf("sum of your number is =%d",sum);
    return 0;
}