//number guess
#include<stdio.h>
int main()
{
    int n,r,sum=0,i,t,a,flag=0;
    
    a=55;
    for(i=1;i<=7;i++)
    {
    printf("Enter your  number:");
    scanf("%d",&n);
    if(n>a){
    printf("Enter number is high\n")   ; 
    }
    else if(a>n){
    printf("Enter number is low\n");
       }
    if(n==a){
    flag=1;
    printf("Enter number is correct ");
    break ;    }}
    if(flag==0)
    printf("            Game over     ");
    return 0;
}    
     