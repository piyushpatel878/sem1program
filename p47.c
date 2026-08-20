//q 15 three side and check it is right angle or not
#include<stdio.h>
int main()
{
    float a,b,c,x,y;
    printf("enter side of triangle a:");
    scanf("%f",&a);
    printf("enter side of triangle b:");
    scanf("%f",&b);
    printf("enter side of triangle c:");
    scanf("%f",&c);
    x = c*c ;
    y=a*a+b*b;
    if (x=y)
    printf("triangle is right angled");
    else
    printf("triangle is not right angled");
    return 0;
}
