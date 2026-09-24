//transpose of a matrix
#include<stdio.h>
#include<conio.h>
int main()
{
    int r,c,i,n,j,m;

    printf("Enter no of rows");
    scanf("%d",&r);

    printf("Enter no of columns");
    scanf("%d",&c);

    int A[r][c];
    int B[c][r];

    printf("Enter element in row wise \n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter elements");
            scanf("%d",&A[i][j]);
            B[j][i]=A[i][j];
        }
    }
    for(i=0;i<r;i++)
    {
        printf("\n");
        for(j=0;j<c;j++)
        {
            printf("%d \t",A[i][j]);
        }
    }
    printf("\nTranspose of matrix is\n ");
    for(j=0;j<c;j++)
    {
        printf("\n");
        for(i=0;i<r;i++)
        {
            printf("%d \t",B[j][i]);
        }
    }
    return 0;
}