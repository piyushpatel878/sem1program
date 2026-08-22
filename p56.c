//Mega Expression Challenge
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e;
    float t,y,R,X,x,z,m,n,Final;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    printf("enter value of c:");
    scanf("%d",&c);
    printf("enter value of d:");
    scanf("%d",&d);
    printf("enter value of e:");
    scanf("%d",&e);
    x = (a+b);
    y = (c-d);
    z = pow(x,2);
    m = pow(y,2);
    R=(float) (z-m)/(a+b+c+d+e);
    X= R*(a-b+c)/(d+e);
    n=pow(R,2);
    t=pow(X,2);
    Final=sqrt(n+t);
    printf("R=%f\n",R);
    printf("X=%f\n",X);
    printf("Final=%f",Final);
    return 0;
}