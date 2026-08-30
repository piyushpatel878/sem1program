//Find LCM.
#include<stdio.h>
int main()
{
     int n,i,y,x,r,GCD,a, LCM;
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
    GCD =i;}
    LCM=(n*x)/GCD;
    
    printf("LCM=%d\n",LCM);}
    else if(n<x){
    for(i=1;i<=x;i++)
    {
    r=n%i;
    a=x%i;
    if(r==0 && a==0)
    GCD =i;}
    LCM=(n*x)/GCD;
    
    printf("LCM=%d\n",LCM);}
    
    return 0;
}    
    
    