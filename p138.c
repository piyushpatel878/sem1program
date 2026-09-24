//Copy an Array
#include<stdio.h>
int main()
{
    int i,j,n;

    printf("Enter size of array:");
    scanf("%d",&n);
    
    int ele[n];
    int elem[n];
    
    for(i=0;i<n;i++)
    {
        printf("Enter your element:");
        scanf("%d",&ele[i]);
        elem[i]=ele[i];
    }

    for(j=0;j<n;j++)
    printf(" %d ",elem[j]);
}