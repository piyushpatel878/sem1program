//Compare string
#include<stdio.h>

int main()
{
    int j = 0, flag = 0;
    char na[100], nam[100];

    printf("Enter your first word: ");
    scanf("%s", na);

    printf("Enter your second word: ");
    scanf("%s", nam);

    for(j = 0; nam[j] != '\0'; j++)
    {
        if(na[j] == '\0')
        {
            flag = 1;
            break;
        }

        if(na[j] != nam[j])
        {
            flag = 1;
            break;
        }
    }

    if(na[j] != '\0')
        flag = 1;

    if(flag == 0)
        printf("Strings are same");
    else
        printf("Strings are not same");

    return 0;
}

