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
    for (int a0 = 0; a0 < t; a0++)
    {
        int n; // number of students
        int k; // cancellation treshold
        int numS = 0;
        cin >> n >> k;
        vector<int> a(n); // arrival times
        for (int a_i = 0; a_i < n; a_i++)
        {
            cin >> a[a_i];
            if (a[a_i] <= 0)
                numS++;
        }
        if (numS < k)
        {
            cout << "YES";
        }
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}