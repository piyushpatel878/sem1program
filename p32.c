// Lowercase to Uppercase 
#include<stdio.h>
int main()
{
    char alphabet;
    printf("enetr your alphabet:");
    scanf("%c", &alphabet);
    if(alphabet>= 'a' && alphabet <='z')
    alphabet = alphabet -32;
    printf("Uppercase:%c", alphabet);
    return 0;
}