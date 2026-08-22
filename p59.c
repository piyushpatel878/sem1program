//Last Digit Checker Even or Odd
#include<stdio.h>
int main()
{
    int num,ld;
    printf("enter your number:");
    scanf("%d",&num);
    ld = num%10;
    if (ld%2 ==0)
    printf(" last digit is even");
    else
    printf(" last digit is odd");
    return 0;

}