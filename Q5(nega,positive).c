#include <stdio.h>

void swap(int *a, int *b)
{
    int *temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void partition(int arr[], int start, int end)
{
    int p_index = start;
    for (int i = 0; i < end; i++)
    {
        if (arr[i] < 0)
        {
            swap(&arr[i], &arr[p_index]);
            p_index++;
        }
    }
}

int main()
{
    int arr[] = {1, 4, -1, 7, 8, -3, -9, -2, 6, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    partition(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}