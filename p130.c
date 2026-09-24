//que ans quiz
#include<stdio.h>
#include<string.h>
int main()
{
    char name[100];
    char s2[20]="Dennis Ritchie";
    int n,i=0;
    printf("who is the inventor of c:");
    while(i<3)
    {
        scanf(" %[^\n]", name);

        n=strcmp(name,s2);
        if(n==0)
        {
            printf("GOOD");
            break;
        }
        else 
            printf("try again\n");  
        i++;      
    }
    if (i>=3)
    printf("\ncorrect ans is Dennis Ritchie");
    
}