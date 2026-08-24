//Admission Eligibility Checker 💀🔥
#include<stdio.h>
int main()
{
    int phy,math,chem,total;
    printf("Enter your marks in chemistry:");
    scanf("%d",&chem);
    printf("Enter your marks in physics:");
    scanf("%d",&phy);
    printf("Enter your marks in math:");
    scanf("%d",&math);
    total =phy+math+chem;
    if (math >=50 && phy>=45 && chem >=45 && total >=150)
    printf("you are eligible");
    else 
    printf("you are not eligible");
    return 0;


}