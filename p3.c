// calculator
#include<stdio.h>
int main()
{
    int a,b,c,d,sum,diff,mull;
    float div;
    printf("enter your number a: ");
    scanf("%d", &a);
    printf("enter your number b: ");
    scanf("%d", &b);
    printf("enter your number c:");
    scanf("%d", &c);
    printf("enter your number d: ");
    scanf("%d", &d);
    sum = a+b+c+d;
    printf("\ sum of your number is %d:\n",sum);
    diff = a-b-c-d;
    printf("\ diff of your number is %d:\n",diff);
    mull = a*b*c*d;
    printf("\ mull of your number is %d:\n",mull);
    div = (float) (a*b*c*0.1)/d;
    printf("\ div of your number is %f :",div);
    return 0;

}