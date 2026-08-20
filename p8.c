// Largest of Three Numbers  
#include<stdio.h>
int main()
{
    int a,b,c;
    
    printf("enter your number a:");
    scanf("%d", &a);
    printf("enter your number b:");
    scanf("%d", &b);
    printf("enter your number c:");
    scanf("%d", &c);
    if (a>=b && a>=c)
    {printf("a is the largest number among 3 number");
    }else if (b>=a && b>=c)
    {printf("b is the largest number among 3 number");
    }else 
    
        printf("c is the largest number among 3 number");
    return 0;

}