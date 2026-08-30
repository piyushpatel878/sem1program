//Print all factors  of a number.(sum and count)
#include<stdio.h>
int main()
{
     int n,i,count=0,r,sum=0;
    printf("Enter your number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    
    {
    r=n%i;
    if(r==0){
    count++;
    sum=sum+i;
    
    
    printf("factors =%d\n",i);}}
    printf("\n");
    printf("number of factors is %d\n",count);
    printf("sum of factors is %d",sum);
    
    return 0;
}    
    
    