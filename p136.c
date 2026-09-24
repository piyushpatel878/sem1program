//Second Largest and Second Smallest Element
#include<stdio.h>
int main()
{
    int i=0,n,s,z,max,min;
    printf("Enter size of array:");
    scanf("%d",&n);
    int ele[n];
    printf("Enter elements:");
    scanf("%d",&ele[i]);
    max=ele[0];
    s=ele[0];
    z=ele[0];
    min=ele[0];
    for(i=1;i<n;i++)
    {
        printf("Enter elements:");
        scanf("%d",&ele[i]);
        if(ele[i]>max)
        {
        s=max;
        max=ele[i];
        }
        else if (ele[i]>s)
        s=ele[i];

        if(ele[i]<min)
        {
        z=min;    
        min=ele[i];
        }    
        else if(ele[i]<z)
        z=ele[i];
    }
        printf("\nSecond Largest  Element=%d",s);
        printf("\nSecond Smallest Element=%d",z);

    return 0;
}