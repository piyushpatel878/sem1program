//even odd with nesting
#include<stdio.h>
int main()
{
    int num;
    stat1:
    printf("enter your number:");
    scanf("%d",&num);
    if(num>0)
    {
        if(num%2==0)
        printf("enter number is even");
        else 
        printf("enter number is odd");

    }
    
    else if (num <0)
    {
    printf("enter positive number \n");
    goto stat1;}
    else 
    printf("number is zero");
    return 0;


}