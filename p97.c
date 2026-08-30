//perfect number 
#include<stdio.h>
int main()
{
     int n,i,count=0,r,sum=0;
    printf("Enter your number:");
    scanf("%d",&n);
    for(i=1;i<=n-1;i++)
    
    {
    r=n%i;
    if(r==0){
    sum=sum+i;
    printf("factors =%d\n",i);}}
    printf("sum of factors =%d\n",sum);
    if (sum==n)
    printf("Enter number is perfect \n");
    return 0;
}    
    
    