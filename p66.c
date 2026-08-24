//check the triangle is valid or not and of which type
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter side of a:");
    scanf("%d", &a);
    printf("Enter side of b:");
    scanf("%d", &b);
    printf("Enter side of c:");
    scanf("%d", &c);
    if (a+b>c && a+c>b && b+c>a)
{
    printf("triangle is valid\n");
    if (a==b && b==c)
    printf("triangle is Equilateral");
    else if (a==b || b==c || a==c )
    printf("triangle is Isosceles");
    else if (a!=b && b!=c && a!=c)
    printf("triangle is IScalene");
}
    else 
    printf("triangle is not valid");
    return 0;
}