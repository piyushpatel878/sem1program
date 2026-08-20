//Unit Converter 
#include<stdio.h>
int main()
{
    float meter,km,cm,mm,kg,mg,cg,gram;
    printf("enter number of meter:");
    scanf("%f", &meter);
    km =meter/1000;
    cm =meter*100;
    mm = meter*1000;
    printf("km= %.2f \n",km);
    printf("cm= %.2f\n",cm);
    printf("mm= %.2f \n",mm);
    printf("enter number of gram:");
    scanf("%f", &gram);
    kg =gram/1000;
    mg =gram*1000;
    cg = gram*100;
    printf("kg= %.2f \n",kg);
    printf("mg= %.2f \n",mg);
    printf("cg= %.2f \n",cg);
    return 0;


}