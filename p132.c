//array input and output
#include<stdio.h>
int main()
{
    int i,n,j;
    printf("Enter size of array");
    scanf("%d",&n);
    int ele[n];
    for(i=0;i<n;i++)
    {
    printf("Enter elements:");
    scanf("%d",&ele[i]);
    }
    for(j=0;j<i;j++)
    printf("\nArray elements:%d",ele[j]);
    return 0;
}