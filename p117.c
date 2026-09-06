//currency counter 
#include<stdio.h>
int main()
{
    int a,count=0,count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0;
    printf("Enter your amount:");
    scanf("%d",&a);
    while(a>0){
    if(a>=500){
    a=a-500;
    count++;}
    else if (a>=200){
    a=a-200;
    count1++;}
    else if (a>=100){
    a=a-100;
    count2++;}
    else if (a>=50){
    a=a-50;
    count3++;}
    else if (a>=10){
    a=a-10;
    count4++;}
    else if (a>=5){
    a=a-5;
    count5++;} 
    else if (a>=2){
    a=a-2;
    count6++;}
    else if (a>=1){
    a=a-1;
    count7++;} 
    }
    printf("500 =%d\n",count);
    printf("200 =%d\n",count1);
    printf("100 =%d\n",count2);
    printf("50  =%d\n",count3);
    printf("10  =%d\n",count4);
    printf("5   =%d\n",count5);
    printf("2 =%d\n",count6);
    printf("1 =%d",count7);
    return 0;
    }
    
    