//Print all factors of a number.
#include<stdio.h>
int main()
{
     int n,i,count=0,r;
    printf("Enter your number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    
    {
    r=n%i;
    if(r==0){
    count++;
    
    
    printf("factors =%d\n",i);}}
    printf("\n");
    printf("number of factors is %d",count);
    return 0;
}    
    
    