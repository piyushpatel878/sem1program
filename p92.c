//largest digits 
#include<stdio.h>
int main()
{
    int i,r,n,y,largest=0 ;
    
    printf("Enter your number:");
    scanf("%d",&n);
    for(;n>0;n=n/10){
    r=n%10;
    if(r>=largest)
    largest=r;}
    printf("Largest digits in number is %d",largest);
    return 0;
    }