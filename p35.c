//Power Calculator 
#include<math.h>
int main()
{
    float base,power, Power;
    printf("enter base:");
    scanf("%f", &base);
    printf("enter power:");
    scanf("%f", &power);
    Power=pow(base,power);
    printf("power %.2f",Power);
    return 0;
}