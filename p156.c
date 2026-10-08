//Histogram of marks
#include<stdio.h>
int main()
{
    int marks[10];
    int j,i;
    for(i=0;i<10;i++) 
    {
    printf("Enter marks of 10 student out of 10:");
    scanf("%d",&marks[i]);
    }
    for(i=0;i<10;i++) 
    {
    for(j=marks[i];j>0;j--)
    {
    printf("*");
    }
    printf("\n");
    }
    return 0;
}