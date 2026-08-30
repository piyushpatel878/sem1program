//Harshad Number Checker
#include<stdio.h>
int main()
{
    int n,r,sum=0,t;
    printf("Enter your  number:");
    scanf("%d",&n);
    t=n;
    for(;n>0;n=n/10){
    r=n%10;
    sum=sum+r;}
    if(t%sum==0)
    printf("Harshad Number ");
    else
    printf("it is not an Harshad Number ");
    
    return 0;
}    
     