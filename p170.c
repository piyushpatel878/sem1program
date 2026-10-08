//Toggle Case
#include<stdio.h>
int main()
{    
    int n,j,k;
    char word[100];
    
    printf("Enter your word");
    scanf("%s",word);

    for(int i = 0; word[i] != '\0'; i++)
    {
        if(word[i] >= 'a' && word[i] <= 'z')
        word[i] = word[i] - 32;
        else if(word[i] >= 'A' && word[i] <= 'Z')
        word[i] = word[i] + 32;
    }

    printf("%s", word);
    
    return 0;
}
