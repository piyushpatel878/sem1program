//Replace Character
#include<stdio.h>

int main()
{
    int n,j;
    char word[100],x,y;

    printf("Enter your word:");
    scanf("%[^\n]",word);
    printf("Enter your character you want to replace and  with which character");
    scanf("\n%c %c",&x,&y);
    
    
    for(j=0;word[j]!='\0';j++)
    {
        if(word[j]==x)
        {
        word[j]=y;
        }
    }
    
    printf("%s",word);
    
    return 0;
}