/* generate series 
1/1!+2/2!+....n terms *2
1/1!-+2/2!+....n terms *3
1/0!-2/1!+....n terms *4
*/
#include<stdio.h>
#include<math.h>
float fac(float n);
int main()
{
    float su=0,su1=0,su2=0,n,j,k,i;
    printf("Series look like \n1/1!+2/2!+....n terms *2\n1/1!-+2/2!+....n terms *3 \n1/0!-2/1!+....n terms *4");
    
    printf("\n Enter value of n for above series");   
    scanf("%f",&n);
    
    for(j=1;j<=n;j++)
    su=su+j/fac(j);
    printf("%f\n",su*2);
    
    for(k=1;k<=n;k++)
    su1=su1+pow(-1,k+1)*(k/fac(k));
    printf("%f\n",su1*3);
    
    for(i=1;i<=n;i++)
    su2=su2+pow(-1,i+1)*(i/fac(i-1));
    printf("%f",su2*4);
    return 0;
    }
    float fac(float n)
    {
    float sum=0;
    if(n==1)
    return 1;
    if(n==0)
    return 1;
    if(n>1)
    sum=n*fac(n-1);
    return sum;
    }
    