#include <stdio.h>

void main()
{
    int arr[100];
    int n;
    printf("Enter the number of element: ");
    scanf("%d", &n);

    for (int k = 0; k < n; k++)
    {
        scanf("%d", &arr[k]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;

    }

        for (int l = 0; l < n; l++)
        {
            printf("%d, ", arr[l]);
        }
        }