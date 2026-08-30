//armstrong number
#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,a,r,t,sum=0,count=0;
    printf("Enter your  number:");
    scanf("%d",&n);
    t=n;
    for(;n>0;n=n/10)
    count++;
    n=t;
    for(;n>0;){
    r=n%10;
    a=pow(r,count);
    n=n/10;
    sum =sum+a;}
    if(sum==t){
    printf("it is Armstrong number");}
    else
    printf("it is not an Armstrong number");
    return 0;
}    
     