//Alphabet Checker 
#include<stdio.h>
int main()
{
    char anything;
    printf("enter anything:");
    scanf("%c", &anything);
    if ( anything >= 'A' && anything <= 'Z' )
    { printf("it is an alphabet");
    }
    else{
    printf("it is not an alphabet");
    }return 0;
}