// binary search 
#include <stdio.h>

int main()
{
    int i,a,n,flag=0,t;
    
    printf("Enter size of array:");
    scanf("%d",&n);
    
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
    
    for(i=0;i<n;i++)
    {
        if(t==ele[i])
        {
            a=i;
            flag=1;
        }
        
    }
    if(flag==0)
    printf("Enter valid target");
    if(flag==1)
    printf("\nTarget is %d and its index %d",t,a);
    
    return 0;
}