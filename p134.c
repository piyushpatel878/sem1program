//Maximum and Minimum Element and sum and diff of that
#include<stdio.h>
int main()
{
    int n,i=0,max,min,sum,diff;
    printf("Enter size of array:");
    scanf("%d",&n);

    int ele[n];
    printf("Enter element:");
    scanf("%d",&ele[i]);
    max=ele[0];
    min=ele[0];

    for(i=1;i<n;i++)
    {
        printf("Enter element:");
        scanf("%d",&ele[i]);

        if(ele[i]>max)
        max=ele[i];

        if(ele[i]<min)
        min=ele[i];

    }
    sum=max+min;
    diff=max-min;
    printf("Maximum of Array Elements=%d\n",max);
    printf("Minimum of Array Elements=%d",min);
    printf("Sum of Maximum and Minimum of Array Elements=%d\n",sum);
    printf("Diff of Maximum and Minimum of Array Elements=%d",diff);

    return 0;
}