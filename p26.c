//Time Converter
#include<stdio.h>
int main()
{
    float second,minute ,hour,day,month,year ;
    printf("enter number of second:");
    scanf("%f",&second);
    minute = second/60;
    hour = second/3600;
    day = second/(3600*24) ;
    month = second/(3600*24*30) ;
    year = second/(3600*24*30*12) ;
    printf("number of minute = %f \n", minute);
    printf("number of hour = %f \n",hour);
    printf("number of day = %f \n",day );
    printf("number of month = %f \n", month);
    printf("number of year = %f \n",year);
    return 0;
}