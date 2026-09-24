// square number and square root
#include<stdio.h>
#include<math.h>
int main()
{
    float i,x,y;
    printf("Number \t Sqaure root \tSquare\n");
    printf("___________________________________________\n");
    for(i=1;i<=100;i++)
    {
        x=sqrt(i);
        y=pow(i,2);
        printf("%.0f \t %.3f \t\t%.0f\n",i,x,y);
    }
    return 0;
}
