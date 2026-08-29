//smallest digits 
#include<stdio.h>
int main()
{
    int i,r,n,smallest=0;
    
    printf("Enter your number:");
    scanf("%d",&n);
    smallest=n;
    for(;n>0;n=n/10){
    r=n%10;
    if(r<=smallest)
    smallest=r;}
    printf("smallest digits in number is %d",smallest);
    return 0;
    }