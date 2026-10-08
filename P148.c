// Insertion Sort
#include <stdio.h>

int main()
{
    int i, j, n, key;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int ele[n];

    for(i = 0; i < n; i++)
    {
        printf("Enter your element: ");
        scanf("%d", &ele[i]);
    }

    for(i = 1; i < n; i++)
    {
        key = ele[i];
        j = i - 1;

        while(j >= 0 && ele[j] > key)
        {
            ele[j + 1] = ele[j];
            j--;
        }

        ele[j + 1] = key;
    }

    printf("Insertion array: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", ele[i]);
    }

    return 0;
}