//First Letter Capital
#include<stdio.h>
int main()
{    
    int n,j=0,k,i;
    char word[100];
    
    printf("Enter your word");
    scanf("%[^\n]",word);

    for(i = 0; word[i]!= '\0'; i++)
    {
    if(i==0)
    {
    if(word[i]>='a'&& word[i]<='z')
        word[i] = word[i] - 32;
    }
    else if(word[i-1]== ' ')    
    {
    if(word[i]>='a'&& word[i]<='z')
    word[i] = word[i] - 32;
    }
    }
    printf("%s", word);
    
    return 0;
}