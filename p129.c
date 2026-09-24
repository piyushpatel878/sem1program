//sum of number until zero
#include<stdio.h>
int main()
{
    int n,sum=0;
    do{
        printf("Enter your number:");
        scanf("%d",&n);
        sum=sum+n;
      }
    while(n!=0);
    printf("sum =%d",sum);
    return 0;

}