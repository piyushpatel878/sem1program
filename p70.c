//sum of birth date
#include<stdio.h>
int main()
{
    int i,n, sum=0,r;
    printf("Enter your birth date:");
    scanf("%d",&n);
    for(i=0;n>0;n/10)
    {
        r=n%10;
        sum = sum +r;
        n=n/10;
    }
    printf("sum of your date is =%d",sum);
    return 0;
}