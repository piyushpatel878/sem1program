 //multiplication 
#include<stdio.h>
int main()
{
    int n, i,sum=0;
    printf("Enter your number:");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
    sum =n*i;
    printf("%d",sum);
    printf("\n");
    }
     return 0;
}