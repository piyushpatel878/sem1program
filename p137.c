//Reverse an Array
#include<stdio.h>
int main()
{
    int n,i,j,reverse;

    printf("Enter size of array:");
    scanf("%d",&n);

    int ele[n];

    for(i=0;i<n;i++)
    {
    printf("Enter  your Element:");
    scanf("%d",&ele[i]);
    }
    printf("Reverse=");
    for(i=4;i>=0;i--)
    {
        printf("%d ",ele[i]);
    }
    return 0;
}