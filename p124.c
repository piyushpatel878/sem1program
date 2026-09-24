//name into ascii value

#include<stdio.h>

int main()

{
    int i;
    char name[100];

    printf("Enter your name:");
    scanf("%s",name);
    
    for(i = 0; name[i] != '\0'; i++)
    printf("ascii value=%d\n",name[i]);
    return 0;
}