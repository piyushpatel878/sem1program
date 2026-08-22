//Electrical Power & Energy
#include<stdio.h>
int main()
{
    int V,I,T;
    float P,E,cost,Rate;
    printf("Enter value of V:");
    scanf("%d", &V);
    printf("Enter value of I:");
    scanf("%d", &I);
    printf("Enter value of T:");
    scanf("%d", &T);
    printf("Enter Rate ");
    scanf(" %f", &Rate);
    P = V*I;
    E = (P*T)/1000;
    cost = E * Rate;
    printf(" value of P= %f\n",P);
    printf(" value of E= %f\n",E);
    printf(" value of  cost= %f\n", cost);
    return 0;



}