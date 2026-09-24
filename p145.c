// Caesar Cipher
#include <stdio.h>

int main()
{
    char decode[50], code[50];
    int i, c = 0;

    printf("Enter your code: ");

    for(i = 0; i < 50; i++)
    {
        scanf("%c", &code[i]);

        if(code[i] == '\n')
            break;

        if(code[i] >= 'a' && code[i] <= 'c')
            decode[i] = code[i] + 23;

        else if(code[i] >= 'A' && code[i] <= 'C')
            decode[i] = code[i] + 23;

        else if((code[i] >= 'a' && code[i] <= 'z') ||
                (code[i] >= 'A' && code[i] <= 'Z'))
            decode[i] = code[i] - 3;

        else
            decode[i] = code[i];

        c++;
    }

    printf("Decoded message is: ");

    for(i = 0; i < c; i++)
        printf("%c", decode[i]);

    return 0;
}