//Multiplication Table  
#include<stdio.h>
int main()
{
    int number,i,mul,multiply;
    printf("enter your number:");
    scanf("%d", &number);
    printf("enter upto which number you want to multiply:");
    scanf("%d", &multiply);
    i=1;
    while(i<=multiply){
    mul=number*i;
    printf(" %d * %d = %d \n",number,i,mul);
    i++;
    }
    return 0;
}