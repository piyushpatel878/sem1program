/*Given an integer number, write a
program that displays the number as follows:
First line : all digits
Second line : all except first digit
Third line : all except first two digits*/
#include<stdio.h>
#include<math.h>
int main()
{
    int r,i,c,a,t,b,d,z,count=0;
    printf("Enter your number:");
    scanf("%d",&b);
    t=b;
    for(i=1;i<=b;b=b/10){
    c=b%10;
    count++;}
    for(a=count;a>=1;a--){
    z=pow(10,a);
    r=t%z;
    printf("%d",r);
    printf("\n");}
    return 0;
    }    
    
    