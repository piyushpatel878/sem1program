//Print multiples of 5 from 1 to 100
#include<stdio.h>
int main()
{
    int n,i,rem;
    for(i=1;i<=100;i++){
    rem =i%5;
    if (rem ==0)
    printf("%d",i);
    printf("\n");}
    return 0;
    }