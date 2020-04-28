#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        if (n == 0)
            cout << 1 << endl;
        if (n == 1)
            cout << 2 << endl;
        if (n > 1)
            cout << ((1 << ((n & 1) ? ((n + 1) / 2) : (n / 2)) + 1) - ((n & 1) ? 2 : 1)) << endl;
    }
    return 0;
}
