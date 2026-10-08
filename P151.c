// Count and print Even/Odd Elements
#include <stdio.h>

int main()
{
    int n,j=0,k=0,count=0,count1=0,i;
    
    printf("Enter size of array");
    scanf("%d",&n);
    
    int ele[n];
    int e[n];
    int o[n];
    
    for(i=0;i<n;i++)
    {
        printf("\nEnter elements:");
        scanf("%d",&ele[i]);
    } 
    
    printf("\nEntered elements");
    
    for(i=0;i<n;i++)
    {
            printf(" %d ",ele[i]);
        
            if(ele[i]%2==0)
            {
                e[j]=ele[i];
                j++;
                count++;
            }
            else
            {
                count1++;
                o[k]=ele[i];
                k++;
            }
            
    }
    printf("\nnumber of even elements are %d is ",count);
    
    for(j=0;j<count;j++)
    printf("%d",e[j]);
    
    printf("\nnumber of odd elements are %d is",count1);
    
    for(k=0;k<count1;k++)
    printf("%d",o[k]);
    return 0;
}