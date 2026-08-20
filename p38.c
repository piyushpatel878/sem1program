//Day Finder 
#include<stdio.h>
int main()
{
    int day ;
    printf("enter your date: ");
    scanf("%d", &day);
    if ( day == 1 || day ==8 || day ==15 || day == 22 || day == 29)
    printf("that is saturday");
    else if ( day == 2 || day ==9 || day ==16 || day == 23 || day == 30)
    printf("that is sunday");
    else if ( day == 3 || day ==10 || day ==17 || day == 24 || day == 31)
    printf("that is monday");
    else if ( day == 4 || day ==11 || day ==18 || day == 25 )
    printf("that is tuesday");
    else if ( day == 5 || day ==12 || day ==19 || day == 26 )
    printf("that is wednesday");
    else if ( day == 6 || day ==13 || day ==20 || day == 27 )
    printf("that is thursday");
    else if ( day == 7 || day ==14 || day ==21 || day == 28 )
    printf("that is friday");
    
    return 0;
} 