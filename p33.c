// Character Type Checker
#include<stdio.h>
int main()
{
    char  character;
    printf("enter your character:");
    scanf("%c", &character);
    if ( character >='a'&&  character <='z')
    printf("your character is lower case");
    else if ( character >='A'&&  character <='Z')
    printf("your character is upper case");
    else if ( character >= '0' &&  character <= '9')
    printf("your character is digit ");
    else 
    printf("anything else");
    return 0;

}