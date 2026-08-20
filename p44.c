//read yalue of x and y ang print result q 12
#include<stdio.h>
int main()
{
    int x,y;
    float a,b,c;
    printf("enter your number in x:");
    scanf("%d",&x);
    printf("enter your number in y:");
    scanf("%d",&y);
    a = (x+y)/(x-y);
    b = (x+y)/2;
    c = (x+y)*(x-y);
    printf("value of a %.2f \n",a);
    printf("value of b %.2f \n",b);
    printf("value of c %.2f",c);
    return 0;
}