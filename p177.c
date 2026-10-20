//Recursive GCD
#include<stdio.h>
int GCD(int a,int b);

int main ()
{
    int a,b,result=0;

    printf("Enter two number");
    scanf("%d %d",&a,&b);

    result=GCD(a,b);
    printf("%d",result);

}

int GCD(int a,int b)
{
    if(b==0)
    return a;

    else
    return GCD(b,a%b);
}