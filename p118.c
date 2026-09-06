//right-most digit of float 
#include<stdio.h>
int main()
{
    float a;
    int r,b;
    printf("Enter your number:");
    scanf("%f",&a);
    b=a;
    r=b%100;
    printf("%d",r);
    return 0;
    }    
    
    