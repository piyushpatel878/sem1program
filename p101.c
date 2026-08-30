//Convert decimal to binary
#include<stdio.h>
int main()
{
    int n,i,r,y=0;
    char a[10];
    printf("Enter your decimal number:");
    scanf("%d",&n);
    for(;n>0;){
    r=n%2;
    n=n/2;
    a[y]=r;
    y++;
    }
    printf("binary number is=");
    for(i=y-1;i>=0;i--)
    
    printf("%d",a[i]);
    return 0;
}    
    
     