//Sum of Array Elements
#include<stdio.h>
int main()
{
    int n,i,j,sum=0;
    printf("Enter size of array:");
    scanf("%d",&n);

    int ele[n];

    for(i=0;i<n;i++)
    {
        printf("Enter element:");
        scanf("%d",&ele[i]);
        sum=sum+ele[i];
    }
    printf("Sum of Array Elements=%d",sum);
    return 0;
}