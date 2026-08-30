//Find GCD.
#include<stdio.h>
int main()
{
     int n,i,y,x,r,GCD,a;
    printf("Enter your first number:");
    scanf("%d",&n);
    printf("Enter your second number:");
    scanf("%d",&x);
    if(n>=x){
    for(i=1;i<=n;i++)
    {
    r=n%i;
    a=x%i;
    if(r==0 && a==0)
    GCD =i;
    }
    printf("GCD=%d\n",GCD);}
    else if(n<x){
    for(i=1;i<=x;i++)
    {
    r=n%i;
    a=x%i;
    if(r==0 && a==0)
    GCD =i;
    }
    printf("GCD=%d\n",GCD);}
    
    return 0;
}    
    
    