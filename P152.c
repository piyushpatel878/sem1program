//multiplication table
#include <stdio.h>

int main()
{
    int j,k,c,i,r,n;
    printf("MULTIPLICATION TABLE");
    printf("\nEnter value of row ");
    scanf("%d",&r);
    printf("\nEnter value of column");
    scanf("%d",&c);
    int p[r][c];
    for(i=0;i<r;i++)
    {
    printf("  %2d ",i+1);
    }
    printf("\n\n");
    for(j=0;j<c;j++)
    {
    printf("%d",j+1);
        for(i=0;i<r;i++)
        {
        p[i][j]=(i+1)*(1+j);
        printf("  %2d ",p[i][j]);
        }
        printf("\n");
    }
    return 0;
}