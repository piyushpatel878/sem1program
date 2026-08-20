//q 19 root of euqtion
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,root1,root2,x,root,y;
    printf("enter value of a: ");
    scanf("%f", &a);
    printf("enter value of b: ");
    scanf("%f", &b);
    printf("enter value of c: ");
    scanf("%f", &c);
    x=(b*b-(4*a*c));
    y=sqrt(x);
    root1 = ((-b)+ y)/(2*a);
    root2 = ((-b)-y)/(2*a);
    if (x > 0){
    printf("value of root 1=%f \n",root1);
    printf("value of root 2=%f",root2);
    }
    else if (x==0){
    printf("value of root 1=%f \n",root1);
    printf("value of root 2=%f",root2);
    }
    else
    printf("no real root");
    return 0;
}