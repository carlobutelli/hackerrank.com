#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    unsigned x;
    for (int i = 0; i < t; i++)
    {
        cin >> x;
        cout << ~x << endl;
    }
    return 0;
}
