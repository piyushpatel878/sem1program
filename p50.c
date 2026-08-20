//q 27 more than 100 less than 200 and divisble by 7 thier sum
#include<stdio.h>
int main()

{
    int x,sum,rem;
    sum=0;
    for (x=100;x>=100 && x<=200;x++ ){
    rem=x%7;
    if(rem == 0){
    sum =sum+x;
    }}
    printf("sum is=%d",sum);
    return 0;
}