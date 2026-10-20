//Recursive Fibonacci
#include<stdio.h>
int fib(int n);
int main()
{
    int j,n,result;
    
    printf("Enter your number:");
    scanf("%d",&n);

    for(j=0;j<=n;j++)
    {
    result=fib(j);
    printf("%d ",result);
    }
}

int fib(int n)
{
    int sum=0;
    if(n==0)
    return 0;

    if(n==1)
    return 1;

    else
    sum=fib(n-1)+fib(n-2);
    
    return sum;
}