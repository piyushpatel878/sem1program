//Grade Calculator            
#include<stdio.h>
int main()
{
    int grade;
    printf("enter your grade :");
    scanf("%d", &grade);
    if (grade>=90)
    printf("your grade is A");
    else if (grade>=85)
    printf("your grade is AB");
    else if (grade>=80)
    printf("your grade is B");
    else if (grade>=75)
    printf("your grade is BB");
    else if (grade>=70)
    printf("your grade is C");
    else if (grade>=65)
    printf("your grade is CC");
    return 0;
}