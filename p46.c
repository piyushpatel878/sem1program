// q 13 find salvage value
#include<stdio.h>
int main()
{
    float Depreciation,purchaseprice,yearofservice,salvagevalue;
    printf("enter the value of Depreciation:");
    scanf("%f", &Depreciation);
    printf("enter the value of purchase price:");
    scanf("%f", &purchaseprice);
    printf("enter the value of year of service:");
    scanf("%f",&yearofservice);

    salvagevalue=purchaseprice-(Depreciation*yearofservice);
    printf("salvage value=%.2f",salvagevalue);
    return 0;


}
