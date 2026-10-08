// Selection Sort
#include <stdio.h>

int main()
{
    int j, k, n, b, q, w, min;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int ele[n];

    for(j = 0; j < n; j++)
    {
        printf("Enter your element: ");
        scanf("%d", &ele[j]);
    }

    for(j = 0; j < n - 1; j++)
    {
        min = ele[j];
        w = j;

        for(b = j + 1; b < n; b++)
        {
            if(min > ele[b])
            {
                min = ele[b];
                w = b;
            }
        }

        q = ele[j];
        ele[j] = ele[w];
        ele[w] = q;
    }

    printf("Sorted array: ");

    for(j = 0; j < n; j++)
    {
        printf("%d ", ele[j]);
    }

    return 0;
}