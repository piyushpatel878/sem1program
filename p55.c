//Triangle Calculation
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float x,s,area;
    printf("Enter side a:");
    scanf("%d",&a);
    printf("Enter side b:");
    scanf("%d",&b);
    printf("Enter side c:");
    scanf("%d",&c);
    s =(float)(a+b+c)/2;
    x= s*(s - a)*(s-b)*(s-c);
    area =sqrt(x);
    printf("semi-perimeter=%.3f\n",s);
    printf("area of triangle = %.3f",area);
    return 0;
}