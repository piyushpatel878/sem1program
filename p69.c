//sum of sqaure on n number
#include<stdio.h>
int main()
{
    int n,i=1,sum =0;
    printf("Enter number: ");
    scanf("%d",&n);
    while (i<=n)
    {
        sum = sum +i*i;
        i++;
    }
    printf("sum = %d",sum);
    return 0;

}