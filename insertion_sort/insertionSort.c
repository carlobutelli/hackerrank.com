#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

void insertionSort(int N, int arr[]) {
    int i, j, temp;
    for(i = 0; i < N; i++)
    {
        j = i;
        while(j > 0 && arr[j] < arr[j-1])
        {   
            temp = arr[j];
			arr[j] = arr[j-1];
			arr[j-1] = temp;
			j--;
        }
    }
    for(j = 0; j < N; j++)
    {
        printf("%d", arr[j]);
        printf(" ");
    }
}
int main(void) {

    int N;
    scanf("%d", &N);
    int arr[N], i;
    for(i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    insertionSort(N, arr);

    return 0;
}