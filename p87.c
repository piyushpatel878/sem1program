// palindrome number 
#include<stdio.h>
int main()
{
    int i,r,t,n,reverse=0;
    printf("Enter your number:");
    scanf("%d",&n);
    t=n;
    for(n=n;n>0;n=n/10){
    
    r=n%10;
    reverse = reverse *10 +r;
    printf("%d",r);
    }
    printf("\n")  ; 
     if (t==reverse)
    printf("Enter number is palindrome");
    else 
    printf("enternumberisnot palindrome");  
     return 0;
    
    }