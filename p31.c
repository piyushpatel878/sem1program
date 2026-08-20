//Uppercase to Lowercase
#include<stdio.h>
int main()
{
    char  alphabet;
    printf("enter your word in alphabet:");
    scanf("%c", &alphabet);
    if (alphabet >= 'A' && alphabet <= 'Z') 
    alphabet = alphabet +32;
    printf("alphabet = %c",alphabet);
    return 0;

}