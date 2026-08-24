//nested if to find the largest of three numbers.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter number a:");
    scanf("%d", &a);
    printf("Enter number b:");
    scanf("%d", &b);
    printf("Enter number c:");
    scanf("%d", &c);
    if (a>b)
{
    if (a>c)
    {
        printf("a is largest");
    }
    else
    {
        printf("c is largest");
    }
}
else
{
    if (b>c)
    {
        printf("b is largest");
    }
    else
    {
        if (a==b && b==c)
            printf("a=b=c is largest");
        else
            printf("c is largest");
    }
}
    return 0;

}