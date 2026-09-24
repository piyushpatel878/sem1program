//Merge Two Arrays
#include<stdio.h>
int main()
{
    int i,j,m,n,k;

    printf("Enter size of first array:");
    scanf("%d",&n);

    int ele[n];

    for(i=0;i<n;i++)
    {
        printf("Enter elements of first array:");
        scanf("%d",&ele[i]);
    }

    
    printf("Enter size of second array:");
    scanf("%d",&m);

    int elem[m];

    for(j=0;j<m;j++)
    {
        printf("Enter elements of second array:");
        scanf("%d",&elem[j]);
    }
    k=m+n;
    int el[k];
    for(i=0;i<n;i++)
    {
            el[i]=ele[i];
    }
    for(j=0;j<m;j++)
    {
            el[j+n]=elem[j];
    }
    for(k=0;k<m+n;k++)
    printf(" %d ",el[k]);
}