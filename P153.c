// variance and standard deviation 
#include <stdio.h>
#include <math.h>
int main()
{
    int i=0,n,count=0,sum=0;
    float m,v,var=0,sta;
    int num[100];
    
    
    printf("Calculation of standard and mean deviation");
    printf("\nEnter 0 to end");
    printf("\nEnter your numbers:");
    
    do
    {
    scanf("%d",&n);
    
        if(n!=0)
        {
        num[i]=n;
        i++;
        sum=sum+n;
        count++;
        }
    }
    while(n!=0);
    
    m=sum*1.0/count;
    printf("sum =%d mean =%f",sum,m);
    
    //for variance
    for(i=0;i<count;i++)
    {
    v=pow(num[i]-m,2);
    var=var+v;
    }
    var=var/count;
    
    //for Standard deviation
    sta=sqrt(var);
    
    printf("variance=%f",var);
    printf("standard deviation=%f",sta);
    return 0;
}