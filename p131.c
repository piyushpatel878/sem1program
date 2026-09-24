//palindrome string
#include<stdio.h>
#include<string.h>
int main()
{
    char word[100],name[100];
    int i=0,j=0,n;

    printf("Enter your word:");
    scanf("%s",word);

    while(word[i] != '\0')
    {
        i++;
    }

    for(i = i - 1; i >= 0; i--)
    {
        printf("\nreverse word =%c", word[i]);
        name[j]=word[i];
        j++;
    }
    name[j] = '\0';
    n=strcmp(word,name);

    if(n==0)
    printf("\nEnter word is palindrome");

    else
    printf("\nEnter word is not palindrome");

    return 0;
}