//Vowel and Consonant Count 
#include<stdio.h>

int main()
{
    int v=0,c=0,i;
    char word[100];

    printf("Enter your word");
    scanf("%s",word);
    
    for(i=0;word[i]!='\0';i++)
    {
    if(word[i]=='A' ||word[i]=='a'|| word[i]=='E'|| word[i]=='e'|| word[i]=='I' || word[i]=='i'|| word[i]=='O'|| word[i]=='o'|| word[i]=='U'||word[i]=='u')
    v++;
    else
    c++;
    }
    printf("Vowel =%d",v);
    printf("Consonant =%d",c);
    return 0;
}
