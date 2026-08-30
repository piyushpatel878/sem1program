//automorphic number
#include<stdio.h>
#include<math.h>
int main()
{
    int n,c,b,o,a,r,count=0;
    printf("Enter your  number:");
    scanf("%d",&n);
    o=n;
    a=n*n;
    c=n*n;
    for(;n>0;n=n/10){
    count++;}
    b=pow(10,count);
    r=c%b;
    if(r==o)
    printf("Enter number is automorphic number");
    else
    printf("Enter number is not automorphic number");
    return 0;
}    
     