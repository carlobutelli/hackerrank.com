#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

int partition(int ar_size, int arr[], int left, int right)
{

    int pivot, i, j, tmp;
    pivot = arr[0];
    i = left;
    j = right + 1;

    while (1)
    {
        do
            ++i;
        while (arr[i] <= pivot && i <= right);

        do
            --j;
        while (arr[j] > pivot);

        if (i >= j)
            break;

        tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }
    tmp = arr[left];
    arr[left] = arr[j];
    arr[j] = tmp;

    for (int p = 0; p < ar_size; p++)
    {
        printf("%d ", arr[p]);
    }

    return j;
}

int main(void)
{

    int _ar_size;
    scanf("%d", &_ar_size);
    int _ar[_ar_size], _ar_i;
    for (_ar_i = 0; _ar_i < _ar_size; _ar_i++)
    {
        scanf("%d", &_ar[_ar_i]);
    }

    partition(_ar_size, _ar, 0, _ar_size);

    return 0;
}
