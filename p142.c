//remove odd elements from array 
#include <stdio.h>
int main()
{
    int num[10],i,j,count=0;
    
    printf("Enter 10 elements");
    
    for(i=0;i<10;i++)
    {
        scanf("%d",&num[i]);
    }
    
    for(i=0;i<10;i++)
    {
        if(num[i]%2!=0)
        {
            for(j=i;j<9;j++)
            num[j]=num[j+1];
            i--;
            count++;
        }
      
    }
    
    for(i=0;i<10-count;i++)
    {
        printf(" %d ",num[i]);
    }
    
    return 0;
}