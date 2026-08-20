// Vowel or Consonant 
#include<stdio.h>
int main()
{
    char alphabet;
    printf("enter your alphabet:");
    scanf("%c", &alphabet);
    if (alphabet == 'a' || alphabet ==  'e' ||  alphabet ==  'i'||   alphabet ==  'o' ||  alphabet ==  'o' ){
    printf("it is an Vowel");
    }
    else {
    printf("it is an Consonant");

    }
    return 0;
}