//inverted right triangle pattern
#include<stdio.h>
int main()
{
    int n,j,i;
    printf("Enter your number:");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
    for(j=1;j<=i;j++)
    printf("*");
    printf("\n");}  
    return 0;
    }