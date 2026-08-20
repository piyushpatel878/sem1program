//Simple Interest Calculator
#include<stdio.h>
int main()
{
    float p,r,days,SimpleInterest;
    printf("enter p :");
    scanf("%f", &p);
    printf("enter t in days:");
    scanf("%f", &days);
    printf("enter r :");
    scanf("%f", &r);
    SimpleInterest =(p*r*days*1.0)/(100*365);
    printf(" SimpleInterest=%f", SimpleInterest);
    return 0;
}