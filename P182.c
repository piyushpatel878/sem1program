// generate series 3,7,13,21,31,43
#include<stdio.h>
int main()
{
    int j=3,n;
    int k=4;
    
    printf("Series look like 3,7,13,21...\n");
    printf("Enter value of n for above series");
    scanf("%d",&n);
    
    if(n>=3)
    printf("3");
    label:
    if(j+k<=n)
    {
    j+=k;
    k+=2;
    printf(" %d",j);
    goto label;
    }
    
    return 0;
}