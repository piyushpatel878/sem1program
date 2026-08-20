//Perimeter Calculator
#include<stdio.h>
int main()
#define PI 3.14;
{
    float side,SIde,Side,perimeterofrhombus,length,breadth,radius,Height,Base,perimeterofSquare,perimeterofRectangle, perimeterofCircle,  perimeterofParallelogram,perimeterofTriangle,side1,side2,side3;
    printf("enter side of square:");
    scanf("%f", &side);
    printf("enter length of rectangle:");
    scanf("%f", &length);
    printf("enter breadth of rectangle:");
    scanf("%f", &breadth);
    printf("enter radius of circle:");
    scanf("%f", &radius);
    printf("enter side1 of Triangle :");
    scanf("%f",&side1);
    printf("enter  side2 of Triangle :");
    scanf("%f",&side2 );
    printf("enter  side3 of Triangle :");
    scanf("%f",&side3 );
    printf("enter side of Parallelogram Base: ");
    scanf("%f",&Side);
    printf("enter base of Parallelogram	Base: ");
    scanf("%f",&Base);
    printf("enter side of rhombus: ");
    scanf("%f",&SIde);
    perimeterofSquare =4*side;
    perimeterofRectangle =2*(length+breadth);
    perimeterofCircle =2*radius*PI;
    perimeterofTriangle =side3+side2+side1;
    perimeterofParallelogram=2*(Side+Base);
    perimeterofrhombus=4*SIde;
    printf("  perimeterofSquare = %f \n",  perimeterofSquare);
    printf("  perimeterofRectangle = %f \n",  perimeterofRectangle);
    printf(" perimeterofCircle= %f \n", perimeterofCircle);
    printf(" perimeterofTriangle = %f \n", perimeterofTriangle);
    printf(" perimeterofParallelogram = %f \n",perimeterofParallelogram);
    printf(" perimeterofrhombus = %f \n",perimeterofrhombus);
    return 0;



}