//Compound Interest 
#include<stdio.h>
#include<math.h>
int main()
{
    float Principal,Rate ,Time,Finalamount,x,y;
    printf("enter your Principal Amount:");
    scanf("%f",&Principal);
    printf("enter your Rate:");
    scanf("%f",&Rate);
    printf("enter your Time in year:");
    scanf("%f",&Time);
    x=(1+Rate/100);
    y =pow(x,Time);
    Finalamount = Principal * y ;
    printf("Finalamount=%.2f",Finalamount);
    return 0;

}