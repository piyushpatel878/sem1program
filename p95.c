//Count even and odd digits.
#include<stdio.h>
int main()
{
     int n,i,r,count=0,count1=0;
    printf("Enter your number:");
    scanf("%d",&n);
    for(;n>0;n=n/10)
    {
    r=n%10;
        if(r%2==0)
        {
        count++;
        }
        if(r%2!=0)
        {
        count1++;
        }
    }
    
    printf("number of digit that are odd is %d\n",count++);
    printf("number of digit that are even is %d",count1++);
    return 0;
}    
    
    