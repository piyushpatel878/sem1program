//Password Manager
#include<stdio.h>
   struct pass{
    char website[100],username[100],password[100];
   };
   int main()
{
    struct pass h;
    int count=0,i,j;


    printf("Enter website name:");
    scanf("%99s",h.website);
    printf("Enter username:");
    scanf("%99s",h.username);
    printf("Enter password:");
    scanf("%99s",h.password);


    for(i=0;h.password[i]!='\0';i++)
    count++;

    printf("Password record saved successfully!\n");
    printf("website:%s",h.website);
    printf("\n");
    printf("username:%s",h.username);
    printf("\n");
    printf("password:");
    for(j=0;j<count;j++)
    printf("*");
   
    return 0;
}
