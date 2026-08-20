//Square Root Calculator 
#include<math.h>
int main()
{
    float number, SquareRoot;
    printf("enter your number:");
    scanf("%f", &number);
   // SquareRoot=y;
    SquareRoot =sqrt(number);
    printf("Square Root %.2f",SquareRoot);
    return 0;
}