//Triangle Validity Checker
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter side of a");
    scanf("%d",&a);
    printf("enter side of b");
    scanf("%d",&b);
    printf("enter side of c");
    scanf("%d",&c);
    if (a+b>c && b+c>a && a+c>b)
    printf("triangle is valid");
    else
    printf("triangle is not valid");
    return 0;
}