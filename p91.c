//sum of prime number upto n
#include <stdio.h>

int main()
{
    int i, n, r, flag,count=0,sum=0;

    printf("Enter your number: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++)
    {
        flag = 0;

        for (r = 2; r < i; r++)
        {
            if (i % r == 0)
            {
                flag = 1;
                break;
            }
        }
        

        if (flag == 0){
            printf("%d ", i);
            count++;        
            sum =sum +i;    }
            }
            printf("\n");
    
    printf("count=%d \n",count);
    printf("sum=%d",sum);
    return 0;
}