//Expense Tracker
#include<stdio.h>
struct expense{
    char exp[100],exp1[100];
    float ex,ex1;
};
int main()
{
    struct expense h;

    printf("Enter expense category:");
    scanf("%99s",h.exp);
    printf("Enter expense amount:");
    scanf("%f",&h.ex);
    printf("Enter expense category:");
    scanf("%99s",h.exp1);
    printf("Enter expense amount:");
    scanf("%f",&h.ex1);

    printf("----- Expense Report -----\n");

    printf("%s:",h.exp);
    printf("%.2f\n",h.ex);
    printf("%s:",h.exp1);
    printf("%.2f\n",h.ex1);
    
    return 0;
}