#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cassert>
#include <iostream>

using namespace std;

void insertionSort(int ar_size, int ar[])
{
    int i, j, tmp, p;
    for (i = 1; i < ar_size; i++)
    {
        j = i;
        while (j > 0 && ar[j - 1] > ar[j])
        {
            tmp = ar[j];
            ar[j] = ar[j - 1];
            ar[j - 1] = tmp;
            j--;
        } //end while loop

        for (p = 0; p < ar_size; p++)
            for (p = 0; p < ar_size; p++)
                cout << ar[p] << " ";
        cout << endl;
    } //end for loop
} //end insertion_sort.

int main(void)
{

    int _ar_size;
    cin >> _ar_size;
    //scanf("%d", &_ar_size);
    int _ar[_ar_size], _ar_i;
    for (_ar_i = 0; _ar_i < _ar_size; _ar_i++)
    {
        cin >> _ar[_ar_i];
        //scanf("%d", &_ar[_ar_i]);
    }

    insertionSort(_ar_size, _ar);

    return 0;
}
