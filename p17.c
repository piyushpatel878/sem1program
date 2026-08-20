//Salary Calculator
#include<stdio.h>
int main()
{
    char enteryourname[100];
    float DA,HRA,TA,PF,GS,NetSalary,enteryourbasicsalary ;
    //int enteryourbasicsalary;
    printf("enteryourname:");
    scanf("%99s",enteryourname);
    printf("\n enteryourbasicsalary:");
    scanf("%f",&enteryourbasicsalary);
    /*Dearness Allowance =DA
    House Rent Allowance=HRA
    Travel Allowance =TA
    Provident Fund= PF
    Gross Salary = GS
    Net Salary = NS*/
    printf("enter your DA in percentage:");
    scanf("%f", &DA);
    printf("enter your HRA percentage:");
    scanf("%f", &HRA);
    printf("enter your TA percentage:");
    scanf("%f", &TA);
    printf("enter your PF percentage:");
    scanf("%f", &PF);
    /*Dearness Allowance (DA)
     DA = (Basic Salary × DA%) / 100
     2. House Rent Allowance (HRA)
     HRA = (Basic Salary × HRA%) / 100
     3. Travel Allowance (TA) (if applicable)
     TA = (Basic Salary × TA%) / 100
     4. Provident Fund (PF) (if applicable)
     PF = (Basic Salary × PF%) / 100
     5. Gross Salary
     Gross Salary = Basic Salary + DA + HRA + TA
     6. Net Salary
     Net Salary = Gross Salary − PF − Other Deductions*/
    DA = ( enteryourbasicsalary  * DA) / 100;
    HRA = ( enteryourbasicsalary * HRA) / 100;
    TA = ( enteryourbasicsalary * TA) / 100;
    PF = (enteryourbasicsalary * PF) / 100;
    GS= enteryourbasicsalary+ DA + HRA + TA;
    NetSalary = GS-PF;
    printf(" your TA :%f",TA);
    printf("\n your HRA :%f",HRA);
    printf("\n your DA :%f",DA);
    printf("\n your PF :%f",PF);
    printf("\n your GS :%f",GS);
    printf("\nyour NetSalary :%f",NetSalary);
    return 0;
}