//summation of number until it become single digit
#include<stdio.h>
int main()
{
    long int j,k,n,sum=0,s=0,s1=0,h;
    
    printf("Enter your number n");
    scanf("%ld",&n);
    
    for(;n>0;n=n/10)
    {
    j=n%10;
    sum+=j;
    }
    printf("sum1=%ld\n",sum);
    for(;sum>0;sum=sum/10)
    {
    k=sum%10;
    s+=k;
    }
    printf("sum2=%ld",s);
    if(s>9)
    {
    for(;s>0;s=s/10)
    {
    h=s%10;
    s1+=h;
    }
    printf("\nsum3=%ld",s1);
    }

    return 0;
}