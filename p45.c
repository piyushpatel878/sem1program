//enter two num in km and m add them in laat in m q 6
#include<stdio.h>
int main()
{
    float km,m,M,totalm;
    printf("enter number of km:");
    scanf("%f", &km);
    printf("enter number of m:");
    scanf("%f", &m);
    M=km*1000;
    totalm=m+M;
    printf("total number of m %.2f",totalm);
    return 0;

}
