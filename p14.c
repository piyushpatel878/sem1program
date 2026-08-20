//Average Marks Calculator
#include<stdio.h>
int main()
{
    int subject1,subject2,subject3,subject4,subject5;
    float averagemarks;
    printf("enter your marks of subject1 :");
    scanf("%d", &subject1);
    printf("enter your marks of subject2 :");
    scanf("%d", &subject2);
    printf("enter your marks of subject3 :");
    scanf("%d", &subject3);
    printf("enter your marks of subject4 :");
    scanf("%d", &subject4);
    printf("enter your marks of subject5 :");
    scanf("%d", &subject5);
    averagemarks = subject1+subject2+subject3+subject4+subject5/5;
    printf("averagemarks= %f",averagemarks);
    return 0;





}