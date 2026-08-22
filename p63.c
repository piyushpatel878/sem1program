//Leap Year + Date Days 
#include<stdio.h>
int main()
{
    int year,day,month;
    printf("Enter day:");
    scanf("%d",&day);
    printf("Enter month:");
    scanf("%d",&month);
    printf("Enter year:");
    scanf("%d",&year);
    if (year % 400 == 0|| year%4==0 && year%100 !=0)
    {
        if (month==1 && day<=31 && day>=1 ||month==2 && day<=29 && day>=1 ||month==3 && day<=31 && day>=1 ||month==4 && day<=30 && day>=1 ||month==5 && day<=31 && day>=1 ||month==6 && day<=30 && day>=1||month==7 && day<=31 && day>=1||month==8 && day<=31 && day>=1 ||month==9 && day<=30 && day>=1 ||month==10 && day<=31 && day>=1||month==11 && day<=30 && day>=1||month==12 && day<=31 && day>=1 )
        printf("date is valid and leap year");
        else 
        printf("it is not leap year");
    }
    else 
    printf("it is not leap year");
    return 0;

}