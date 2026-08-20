//q 23 sum of firat 10 n number
#include<stdio.h>
int main()
{
    float i,sum;
    i=1;
    sum=0;
    for(i=1;i<=10;i++){
    sum = sum+i;}
    printf("sum of 10 n natural number=%.2f",sum);
    return 0;
}