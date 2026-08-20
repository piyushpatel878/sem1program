//even or odd checker
#include<stdio.h>
int main ()
{int rem,a;
    printf("enter your number a:");
    scanf("%d", &a);
    rem = a%2;
    if (rem ==0)
    printf("number is even");
    else
    printf("number is odd");
    return 0;

}