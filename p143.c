// copy even and  odd element from array
#include<stdio.h>
int main()
{
    int i,n,j=0,count=0,count1=0,k=0;
    int num[10],odd[10]={},even[10]={};

    //taking input and checking it is even or odd
    printf("Enter your number:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&num[i]);

    }

    for(i=0;i<10;i++)
    {
        if(num[i]%2==0)
        {
            even[j]=num[i];
            j++;
            count++; 
        }

        else 
        {
        odd[k]=num[i];
        k++;
        count1++;    
        }
    }

    //printing even number
    printf("Even number:");
    for(j=0;j<count;j++)
    {
        printf(" %d ",even[j]);
    }

    //printing odd number
    printf("\nodd number:");
    for(k=0;k<count1;k++)
    {
        printf(" %d ",odd[k]);
    }

    return 0;
}