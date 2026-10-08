// binary search 
#include <stdio.h>

int main()
{
    int i=0,a,n,low=0,med,x,high,t,flag=0;
    
    printf("Enter size of array:");
    scanf("%d",&n);
    high=n-1;
    int ele[n];
    
    for(i=0;i<n;i++)
    {
        printf("Enter elements:");
        scanf("%d",&ele[i]);
    } 
    
    printf("Entered elements");
    
    for(i=0;i<n;i++)
    {
        printf(" %d ",ele[i]);
    }
    
    printf("\nEnter target");
    scanf("%d",&t);
    
    while(high>=low)
    {
        med=(high+low)/2;
        
        if(ele[med]==t)
        {
            printf("targetfound");
            flag=1;
            x=med;
            break;
            
        }    
            
        else if (t >ele[med]) 
            low=med+1;
            
        else 
            high=med-1;    
        
            
    }
    
    if(flag==1)
    printf("Target is %d and its index is %d",t,x);
    
    return 0;
}