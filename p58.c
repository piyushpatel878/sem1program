//Divisible by Both 3 and 5
#include<stdio.h>
int main()
{
    int num;
    printf("enter your number:");
    scanf("%d",&num);
    if (num%3 ==0 && num%5 ==0)
    printf("enter number is dividble by both 3&5");
    else 
    printf("enter number is not dividble by both 3&5");
    return 0;

}