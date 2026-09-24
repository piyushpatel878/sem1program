//copy square element
#include<stdio.h>
#include<math.h>

int main()
{
    int i,n,k,y;
    int num[10];
    float x[10],s[10];

    printf("Enter your number:");
    
    //taking input
    for(i=0;i<10;i++)
    {
        scanf("%d",&num[i]);
    }

    for(i=0;i<10;i++)
    {
        s[i]=sqrt(num[i]);
    }

    for(i=0;i<10;i++)
    x[i]=(int)s[i];

    printf("suqre num:");
    for(i=0;i<10;i++)
    if(x[i]==s[i])
    printf(" %d ",num[i]);

    return 0;
}