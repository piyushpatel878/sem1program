//Concatenate String 
#include<stdio.h>
int main ()
{
    int j=0,i=0,k=0;
    char na[100],nam[100],name[100];
    
    
    printf("Enter your first word");
    scanf("%s",na);
    printf("Enter your second word");
    scanf("%s",nam);
    
    do
    {
    name[k]=na[j];
    k++;
    j++;
    }
    while(na[j]!='\0');
    name[k]=' ';
    k++;
    do
    {
    name[k]=nam[i];
    k++;
    i++;
    }
    while(nam[i]!='\0');
    
    printf("%s",name);
}
    