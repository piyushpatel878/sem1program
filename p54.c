//Coordinate Geometry Challenge
#include<stdio.h>
#include<math.h>
int main()
{
    float x1,x2,y1,y2,Distancebetweenpoints,a,b,c,d,f;
    printf("Enter value of x1:");
    scanf("%f",&x1);
    printf("Enter value of x2:");
    scanf("%f",&x2);
    printf("Enter value of y1:");
    scanf("%f",&y1);
    printf("Enter value of y2:");
    scanf("%f",&y2);
    a =(x2 -x1);
    c =pow(a,2);
    b =(y2-y1);
    d =pow(b,2);
    f = c+d;
    Distancebetweenpoints =sqrt(f);
    printf("Distance between points= %.3f",Distancebetweenpoints);
    return 0;
}