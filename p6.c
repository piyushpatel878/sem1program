//Positive, Negative or Zero
#include<stdio.h>
int main()
{
    int a;
    printf("enter your number a :");
    scanf("%d", &a);
    if (a>0)
    printf("entered number is positive ");
    else if (a<0)
    printf("entered number is negative");
    else
    printf("entered number is zero");
    return 0;
}