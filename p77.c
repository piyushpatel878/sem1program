//Print squares of numbers from 1 to 10.
#include<stdio.h>
int main()
{
    int n,i,mul=0;
    printf("Enter your number:");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
    mul=n*i*i;
    
    printf("%d",mul);
    printf("\n");}
    return 0;
    }