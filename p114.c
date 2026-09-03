//hollow square
#include<stdio.h>
int main()
{
    int n,j,i,a,z,b,c,k;
    printf("Enter your number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    { 
    for(j=1;j<=n;j++)
    {
    if(i==1||i==n||j==1||j==n)
    printf("*");
    else
    printf(" ");
    }
    printf("\n");
    }
    return 0;
    }