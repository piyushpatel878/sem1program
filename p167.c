//remove vowel
#include<stdio.h>

int main()
{
    int n,j;
    char word[100];

    printf("Enter your word:");
    scanf("%[^\n]",word);

    for(j=0;word[j]!='\0';j++)
    {
    if(word[j]=='A'|| word[j]=='a'|| word[j]=='E'|| word[j]=='e'||word[j]=='I'|| word[j]=='i'||word[j]=='o'|| word[j]=='O'||word[j]=='u'|| word[j]=='U')
    {
    for(n=j;word[n]!='\0';n++)
    word[n]=word[n+1];
    if(j>0)
    j--;
    }
    }
    for(n=0;word[n]!='\0';n++)
    printf("%c",word[n]);
    
    return 0;
}