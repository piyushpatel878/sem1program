//Sum of First N Numbers
#include<stdio.h>
int main()
{
    int i,number, sum;
    printf("enter nth number:");
    scanf("%d", &number);
    i=1;
    while(i<=number)
    {sum =sum + i;
        i++;
    }
    printf("sum of n number is %d",sum);
    return 0;
}