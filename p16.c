//Electricity Bill Calculator
#include<stdio.h>
int main()
{
    char Consumername[50];
    int ConsumerID;
    float Unitsofelectricityconsumed;
    printf("Consumername:");
    scanf("%49s", Consumername);
    printf("ConsumerID:");
    scanf("%d", &ConsumerID);
    printf("Unitsofelectricityconsumed :");
    scanf("%f", &Unitsofelectricityconsumed );
   /* Units	Rate per Unit
      0–100	₹1.50
      101–200	₹2.50
      201–300	₹4.00
      Above 300	₹6.00 */
    if (Unitsofelectricityconsumed<=100){
    printf("%.2f",Unitsofelectricityconsumed*1.50);
    }
    else if (  Unitsofelectricityconsumed>=101 && Unitsofelectricityconsumed<=200)
    {
        printf ("%.2f",((Unitsofelectricityconsumed-100)*2.50)+(100*1.50));
    }
        else if(Unitsofelectricityconsumed>=201 && Unitsofelectricityconsumed<=300)
    {
        printf("%.2f",((Unitsofelectricityconsumed-200) * 4.00) + (100 * 2.50) + (100 * 1.50));
    }
    else if(Unitsofelectricityconsumed>=301)
    {
        printf("%.2f",((Unitsofelectricityconsumed-300) * 6.00)+ (100 * 4.00)+ (100 * 2.50)+ (100 * 1.50));
    }
    return 0;


}