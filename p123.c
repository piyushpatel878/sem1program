//roundoff and  print*
#include<stdio.h>
int main()
{
    float n;
    int i,j,x;
    printf("Enter your number:");
    scanf("%f",&n);
    x=(int) (n+0.5);
    for(j=1;j<=x;j++)
    {
        for(i=1;i<=x;i++)
        printf("*");
        printf("\n");
    }
    return 0;
}