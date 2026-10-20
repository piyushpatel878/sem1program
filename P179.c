//Function Calculator
#include<stdio.h>
float mul(float a,float b);
float div(float a,float b);
float add(float a,float b);
float sub(float a,float b);
int main()
{
    int c;
    float a,b;
    
    printf("Enter two number");
    scanf("%f %f",&a,&b);
    
    printf("Enter\n 1 for multiplication\n 2 for division\n 3 for addition\n 4 for subtraction\n");
    scanf("%d",&c);
    
    if (c==1)
    printf("MULTIPLICATION =%f",mul(a,b));
    
    else if(c==2)
    printf("Division =%f",div(a,b));
    
    else if(c==3)
    printf("addition =%f",add(a,b));
    
    else if(c==4)
    printf("subtraction=%f",sub(a,b));
    
    
}

float mul(float a,float b)
{
    float mul=0;
    mul=a*b;
    return mul;
}

float div(float a,float b)
{
    float div=0;
    div=a/b;
    return div;
}

float add(float a,float b)
{
    float add=0;
    add=a+b;
    return add;
}

float sub(float a,float b)
{
    float sub=0;
    sub=a-b;
    return sub;
}