//star diamond 
#include<stdio.h>
int main()
{
    int n,j,i,a,b,c,k;
    printf("Enter your number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    for(k=1;k<=n-i;k++)
    printf(" ");
    for(j=1;j<=i;j++)
    printf(" *");
    printf("\n");}
    if(n>=1){
    for(a=n-1;a>=1;a--){
    for(b=1;b<=n-a;b++)
    printf(" ");
    for(c=1;c<=a;c++)
    printf(" *");
    printf("\n");}}
    return 0;
    }