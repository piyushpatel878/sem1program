// Reverse String
#include<stdio.h>

int main()
{
    int j = 0, i = 0;
    char word[100], reverse[100];

    printf("Enter your word: ");
    scanf("%s", word);

    while(word[i] != '\0')
    {
        i++;
    }

    i--;

    do
    {
        reverse[j] = word[i];
        j++;
        i--;
    }
    while(i >= 0);

    reverse[j] = '\0';

    printf("Reverse = %s", reverse);

    return 0;
}
