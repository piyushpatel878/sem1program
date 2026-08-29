//frequency of number
#include<stdio.h>
int main()
{
    long int x=0,a=1,b=2,c=3,d=4,e=5,f=6,g=7,h=8,j=9,n,r,count6=0,count7=0,count9=0,count8=0,count2=0,count3=0,count4=0,count5=0,count1=0,count=0;
    printf("Enter your number:");
    scanf("%d",&n);
    for(;n>0;n=n/10){
    r=n%10;
    if(a==r)
    {
    count1++;
    }
    if(b==r)
    {
    count2++;
    }
    if(c==r)
    {
    count3++;
    }
    if(d==r)
    {
    count4++;}
    if(e==r)
    {
    count5++;
    }
    if(f==r)
    {
    count6++;
    }
    if(g==r)
    {
    count7++;
    }
    if(h==r)
    {
    count8++;}
    if (j==r)
    {count9++;}
    if (x==r)
    {count++;}
    }
    printf("number of digit for %ld is %d\n",x,count);
    printf("number of digit for %ld is %d\n",a,count1);
    printf("number of digit for %ld is %d\n",b,count2);
    printf("number of digit for %ld is %d\n",c,count3);
    printf("number of digit for %ld is %d\n",d,count4);
    printf("number of digit for %ld is %d\n",e,count5);
    printf("number of digit for %ld is %d\n",f,count6);
    printf("number of digit for %ld is %d\n",g,count7);
    printf("number of digit for %ld is %d\n",h,count8);
    printf("number of digit for %ld is %d\n",j,count9);
    
    return 0;
    }