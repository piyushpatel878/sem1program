//Reverse a number
#include<stdio.h>
int main()
{
    int n,i,r,t;
    printf("Enter your number:");
    scanf("%d",&n);   
    for(;n>0;n=n/10){
    r=n%10;
    t=r;
    i=n/10;
    printf("%d",r);}
    printf("\n");
    return 0;
    }