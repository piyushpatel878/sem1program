// Currency Converte
#include<stdio.h>
int main()
{
    float rupee,dollar,pound,Euro,Yen;
    printf("Enter amount of rupee:");
    scanf("%f", &rupee);
    dollar = rupee/87;
    Euro = rupee/101;
    pound = rupee/117;
    Yen = rupee/0.61;
    printf("rupee to dollar: %f \n",dollar );
    printf("rupee to Euro: %f \n",Euro );
    printf("rupee to pound: %f \n",pound);
    printf("rupee to Yen : %f \n",Yen );
    return 0;
}