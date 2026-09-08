//sin cos table
#include <stdio.h>
#include<math.h>
int main()
{
    float i,x,y;
    printf("i(degree)");
    printf("\t sin(i) \t cos(i)\n");
    printf("_______________________________________\n");
    for(i=0;i<=180;i+=15){
    x=sin(i* 3.14159 / 180);
    y=cos(i* 3.14159 / 180);
    printf("%.4f \t %.4f \t %.4f\n",i,x,y);
    }
    return 0;
}
