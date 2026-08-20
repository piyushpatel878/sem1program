//Factorial Calculator
#include<stdio.h>
int main()
{
    int number,i,factorial;
    printf("enter your number:");
    scanf("%d", &number);
    i=1;
    factorial = 1;
    while(i<=number)
    {
        factorial=i* factorial ;
        i++;
    }
    printf("factorial=%d",factorial);
    return 0;
}