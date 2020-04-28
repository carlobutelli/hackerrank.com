#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    long int t;
    cin >> t;

    while (t--)
    {

        long long int m, n, *x, *y, i, j, sum, cx, cy, modu = 1000000007;
        cin >> m >> n;

        x = new long long int[m - 1];
        y = new long long int[n - 1];

        for (i = 0; i < m - 1; i++)
            cin >> x[i];
        for (i = 0; i < n - 1; i++)
            cin >> y[i];
        sort(y, y + n - 1);
        sort(x, x + m - 1);

        i = m - 1 - 1;
        sum = 0;
        j = n - 1 - 1;
        cx = 1;
        cy = 1;
        while (i >= 0 && j >= 0)
        {

            if (x[i] > y[j])
            {
                sum += (x[i] * cy) % modu;
                cx++;
                i--;
            }
            else
            {
                sum += (y[j] * cx) % modu;
                cy++;
                j--;
            }
        }

        while (i >= 0)
        {
            sum += (x[i] * cy) % modu;
            i--;
        }
        while (j >= 0)
        {
            sum += (y[j] * cx) % modu;
            j--;
        }

        cout << sum % modu << endl;
    }
    return 0;
}
