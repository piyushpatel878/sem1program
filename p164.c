//word count
#include<stdio.h>

int main()
{
    int c=0,i;
    char word[100];

    printf("Enter your sentence");
    scanf("%[^\n]",word);
    
    for(i=0;word[i]!='\0';i++)
    {
    if(word[i]==' ')
    {
    c++;
    }
    }
    printf("no of word is %d",c+1);
    return 0;
}
    