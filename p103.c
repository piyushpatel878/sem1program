//strong number
#include<stdio.h>
int main()
{
    int n,i,r,sum=0,fin=0,t;
    printf("Enter your  number:");
    scanf("%d",&n);
    t=n;
    for(;n>0;n=n/10)
    { sum=1;
    r=n%10;
        for(i=1;i<=r;i++){
        sum =sum*i;
        }
        fin=fin +sum;}
        if(fin==t)
        printf("Enter number is strong number");
        else
        printf("Enter number is not strong number");
    
    return 0;
}    
     