//bubble sort
#include<stdio.h>
int main()
{
    int j,k,n,a;
    
    printf("Enter size of array:");
    scanf("%d",&n);
    
    int ele[n];
    
    for(j=0;j<n;j++)
    {    
        printf("Enter your elements:");
        scanf("%d",&ele[j]);
    }    
    
    for(a=0;a<n-1;a++)
    {
    for(j=1;j<n;j++)
    {    
        if(ele[j]<ele[j-1])
        {
            k = ele[j];
            ele[j] = ele[j-1];
            ele[j-1] = k;
        }
    }
    }
    for(j=0;j<n;j++)
    {
    printf("%d",ele[j]);
    }
    return 0;
}