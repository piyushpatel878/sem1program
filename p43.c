//Number Guessing Game
#include<stdio.h>
int main()
{
    int secretnum,number;
    secretnum=10;
    printf("enter your number:");
    scanf("%d",&number);
    if (number>=11 && number <= 15)
    printf(" close but high");
    else if (number >=15 && number <=20)
    {printf("high");}
    else if (number >=20)
    {printf(" too high");}
    else if (number >=6 && number <=9)
    {printf("close but low");}
    else if ( number <=5 && number >=1)
    {printf("low");}
    else if ( number <=0)
    {printf("too low");}
    else if ( number == 10)
    {printf("correct");}
    return 0;


}