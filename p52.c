//Electricity Bill — Advanced
#include<stdio.h>
int main()
{
    float FinalBill,PreviousReading,CurrentReading,Rateperunit,Fixedcharge,Tax,Units,EnergyCharge,RateperUnit;
    printf("enter Previous meter reading:");
    scanf("%f",&PreviousReading);
    printf("enter Current meter reading:");
    scanf("%f",&CurrentReading);
    printf("enter Fixed charge:");
    scanf("%f",&Fixedcharge);
    printf("enter Rateper Unit:");
    scanf("%f",&RateperUnit);
    printf("enter Tax:");
    scanf("%f",&Tax);
    Units=CurrentReading - PreviousReading;
    EnergyCharge=Units * RateperUnit;
    Tax=(EnergyCharge*Tax)/100;
    FinalBill=EnergyCharge+Fixedcharge+Tax;
    printf("Units=%.2f\n",Units);
    printf(" Energy Charge=%.2f\n",EnergyCharge);
    printf(" Tax=%.2f\n",Tax);
    printf(" Final Bill=%.2f",FinalBill);
    return 0;
}