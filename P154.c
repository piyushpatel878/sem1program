// insertion of number
#include <stdio.h>
int main()
{
    int A[10]={1,2,3,4,5,6,7,8};
    int n,a,i;
    
    printf("before insertion");
    for(i=0;i<10;i++)
    printf(" %d",A[i]);
    
    
    printf("\nEnter the position in which you want to input  the number");
    scanf("%d",&n);
    
    
    printf("\nEnter the number");
    scanf("%d",&a);
    
    
    
    
    for(i=8;i>n;i--)
    {
    A[i]=A[i-1];
    }
    A[n]=a;
    
    printf("after insertion ");
    for(i=1;i<10;i++)
    printf(" %d ",A[i]);
    
    
    return 0;
}
    