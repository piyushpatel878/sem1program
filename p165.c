// Character Frequency
#include<stdio.h>

int main()
{
    int n,j,k,flag;
    char word[100];

    printf("Enter your word:");
    scanf("%s",word);

    for(j=0; word[j]!='\0'; j++)
    {
        k=0;
        flag=0;

        for(n=0; word[n]!='\0'; n++)
        {
            if(word[j]==word[n])
                k++;
        }

        for(n=0; n<j; n++)
        {
            if(word[j]==word[n])
            {
                flag=1;
                break;
            }
        }

        if(flag==0)
            printf("%c = %d\n",word[j],k);
    }

    return 0;
}