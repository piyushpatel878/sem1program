//print series 1+3+5 and 0+2+4
#include<stdio.h>
int main()
{
    int n1,n2,j,k;
    
    printf("first series is 1+3+5...\n");   
    printf("Second series is 0+2+4....\n");
    printf("Enter value of n for fisrt series");
    scanf("%d",&n1);
    printf("Enter value of n for second series");
    scanf("%d",&n2);
    
    for(j=1;j<=n1;j+=2)
    {
    if(j+2<=n1)
    printf("%d+",j);
    else
    printf("%d",j);
    }
    printf("\n");    
    for(k=0;k<=n2;k+=2)   
    {
    if(k+2<=n2)
    printf("%d+",k);
    else
    printf("%d",k);
    }
    return 0;
}