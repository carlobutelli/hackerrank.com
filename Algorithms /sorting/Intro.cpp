#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string> // std::string
#include <cstddef>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, V, ar[100];

    // Get value from STDIN
    cin >> V;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    int index;

    for (int i = 0; i < n; i++)
    {
        if (ar[i] == V)
        {
            cout << i << endl;
        }
    }
    return 0;
}
