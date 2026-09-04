// Pascal's triangle 
#include<stdio.h>
int main()
{
    int n,j,i,k,r,sum=0,a, current;
    printf("Enter your number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    current=1;
    for (k=1;k<=n-i;k++)
    printf(" ");
    for(j=1;j<=i;j++){
    printf("%d ",current);
    a=current*(i-j)/j;
    current=a;}
    printf("\n");
    }
    return 0;
    }