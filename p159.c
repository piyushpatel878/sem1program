//copy String 
#include<stdio.h>
int main ()
{
    int j=0,i=0;
    char na[100],nam[100];
    printf("Enter your word");
    scanf("%s",na);
    do
    {
    nam[i]=na[j];
    i++;
    j++;
    }
    while(na[j]!='\0');
    printf("%s",nam);
}
    