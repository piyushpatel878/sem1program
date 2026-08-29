//count prime number upto n
#include <stdio.h>

int main()
{
    int i, n, r, flag,count=0;

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
            count++;            }
            }
            printf("\n");
    
    printf("count=%d",count);

    return 0;
}