#include<stdio.h>
int main()
{
    int i,n,rem,flag=0;
    printf("Enter your number:");
    scanf("%d",&n);
    
    for(i=2;i<=n-1;i++) 
    {
    rem =n%i;
    if(rem==0)
    {
    flag=1;
    break;
    }
    }
    if(flag==0)
    printf("enter number is  prime");
    else
    printf("enter number is not prime");
     return 0;
    
    }