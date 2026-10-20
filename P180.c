//recursive factorial 
#include<stdio.h>
int mul(int b);

int main()
{
    int b,result=0;
    
    printf("Enter your number");
    scanf("%d",&b);
    
    result=mul(b);
    
    printf("factorial=%d",result);
}

int mul(int b)
{
    int sum=1;
    
    if(b==1)
    return 1;
    
    else
    {
    sum=b*mul(b-1);
    }
    return sum;
}