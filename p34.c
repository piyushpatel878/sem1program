//Square & Cube Calculator
#include<stdio.h>
int  main()
{
    int number,square,Cube;
    printf("enter your number:");
    scanf("%d",&number);
    square =number*number;
    Cube =number*number*number;
    printf("square of your number is:%d \n",  square);
    printf("Cube of your number is:%d",  Cube);
    return 0;
}
