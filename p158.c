//String Length
#include<stdio.h>
int main ()
{
    int j=0,n=0;
    char na[100];
    printf("Enter your word");
    scanf("%s",na);
    do
    {
    n++;
    j++;
    }
    while(na[j]!='\0');
    printf("length=%d",n);
}
    