//sum of given digit that is even
#include<stdio.h>
int main()
{
    int i,n,sum=0,r;
    printf("Enter your number:");
    scanf("%d",&n);
    for (i=1;i<=n;n%10)
    {
        r=n%10;
        if (r%2==0)
        {
        sum = sum+r;
        }
        n=n/10;
    }
    printf("sum of given digit that is odd=%d",sum);
    return 0;
}