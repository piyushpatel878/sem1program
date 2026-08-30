//neon number
#include<stdio.h>
int main()
{
    int n,a,sum=0,r;
    printf("Enter your  number:");
    scanf("%d",&n);
    a=n*n;
    for(;a>0;a=a/10){
    r=a%10;
    sum=sum+r;}
    if(sum==n)
    printf("Enter number is neon number");
    else
    printf("Enter number is not neon number");
    return 0;
}    
     