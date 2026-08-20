// Area Calculator
/*Square	Side (s)	Area = s²
Rectangle	Length (l), Breadth (b)	Area = l × b
Circle	Radius (r)	Area = πr²
Triangle	Base (b), Height (h)	Area = ½ × b × h
Parallelogram	Base (b), Height (h)	Area = b × h*/
#include<stdio.h>
int main()
#define PI 3.14;
{
    float side,length,breadth,radius,base,height,Height,Base,AreaofSquare, AreaofRectangle,AreaofCircle,AreaofTriangle, AreaofParallelogram;
    printf("enter side of square:");
    scanf("%f", &side);
    printf("enter length of rectangle:");
    scanf("%f", &length);
    printf("enter breadth of rectangle:");
    scanf("%f", &breadth);
    printf("enter radius of circle:");
    scanf("%f", &radius);
    printf("enter base of Triangle Base:");
    scanf("%f",&base);
    printf("enter height of Triangle Base:");
    scanf("%f",&height );
    printf("enter Height of Parallelogram Base: ");
    scanf("%f",&Height);
    printf("enter base of Parallelogram	Base: ");
    scanf("%f",&Base);
    AreaofSquare =side*side;
    AreaofRectangle =length*breadth;
    AreaofCircle =radius*radius*PI;
    AreaofTriangle =(base*height)/2;
    AreaofParallelogram=Height*Base;
    printf(" AreaofRectangle = %f \n", AreaofRectangle);
    printf(" AreaofSquare = %f \n", AreaofSquare);
    printf(" AreaofCircle = %f \n", AreaofCircle);
    printf(" AreaofTriangle = %f \n", AreaofTriangle);
    printf(" AreaofParallelogram = %f \n", AreaofParallelogram);
    return 0;



}