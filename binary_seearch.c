#include <stdio.h>

int main()
{
    int n, first, last, middle, comp_count = 0, search, arr[100];
    printf("Enter the element: ");
    scanf("%d", &n);

    printf("Enter %d integer in sorted order\n", n);

    for (int c = 0; c < n; c++)
    {
        scanf("%d", &arr[c]);
    }
    printf("ente rthe value to find \n");
    scanf("%d", &search);

    first = 0;
    last = n - 1;
    middle = (first + last) / 2;

    while (first <= last)
    {
        comp_count++;
        if (arr[middle] < search)
        {
            first = middle + 1;
        }
        else if (arr[middle] == search)
        {
            printf("%d is present at location no. %d [No. of comparisons %d].\n", search, middle + 1, comp_count);
            break;
        }
        else
        {
            last = middle - 1;
        }
        middle = (first + last) / 2;
    }

    if (first > last)
    {
        printf("NOT found! %d isn't present in the list [no. of comparisons: %d].\n", search, comp_count);
    }
}
