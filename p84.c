//Find the factorial of every number from 1 to n.
#include<stdio.h>
int main()
{
    int n,i,sum=1;
    printf("Enter your number:");
    scanf("%d",&n);   
    for(i=1;i<=n;i++){
    sum =sum*i;
    printf("%d=%d",i,sum);
    printf("\n");}
    return 0;
    }