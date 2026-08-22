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
        printf("a is largest");
        if (a>c)
        {
            printf("a is largest"); 
        }
        else 
        printf("c is largest");
    }




    if (b>a)
    {
        printf("b is largest");
        if(b>c)
        {
            printf("b is largest");
        }
        else 
        printf("b is largest");
    }
    



    //a=b
    if (a>c)
    {
        printf("a and b is largest");
        if (c>a)
        {
            printf("c is largest");
        }
    }








}