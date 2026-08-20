// Leap Year Checker  
#include<stdio.h>
int main()
{
    int day,leapyear;

    printf("enter your number of day :");
    scanf("%d", &day);
    leapyear =day%366;
    if (leapyear ==0)
 {  printf("this is leap year");
 }
    else
    printf("this is not leap year");
    return 0;
}