//perfect number upto n
#include<stdio.h>
int main()
{
     int n,i,count=0,y,r,sum=0;
    printf("Enter your number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    sum=0;
    for(y=1;y<i;y++){
    r=i%y;
    if(r==0){
    sum=sum+y;}}
    if (sum==i){
    count++;
    printf("perfect number upto n=%d\n",i);}}
    printf(" number =%d",count);
    return 0;
}    
    
    