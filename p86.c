//product of digits of numbers 
#include<stdio.h>
int main()
{
    int n,r,product=1,t;
    printf("Enter your number:");
    scanf("%d",&n); 
    for(;n>0;n=n/10){
    r=n%10;
    product=product *r;
    t=r;}
    printf("%d",product);
    return 0;
    }