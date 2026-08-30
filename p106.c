//spy number checker
#include<stdio.h>
int main()
{
    int n,r,sum=0,product=1;
    printf("Enter your  number:");
    scanf("%d",&n);
    for(;n>0;n=n/10){
    r=n%10;
    sum=sum+r;
    product = product*r;}
    if(sum==product)
    printf("it is spy number");  
    else
    printf("it is not spy number");
    return 0;
}    
     