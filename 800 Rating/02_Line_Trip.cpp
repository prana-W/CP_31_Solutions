#include <iostream>
using namespace std;

// https://codeforces.com/problemset/problem/1901/A
// Done on 19 May 2025

int main()
{
    int t;
    cin >> t;

    for (int testCase = 1; testCase <= t; testCase++)
    {
        int n, x;
        cin >> n >> x;

        int *arr = new int[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int maxi = arr[0];

        for (int i = 1; i < n; i++)
        {

            if (arr[i] - arr[i - 1] > maxi)
                maxi = arr[i] - arr[i - 1];
        }

        if (2 * (x - arr[n - 1]) > maxi)
            maxi = 2 * (x - arr[n - 1]);

        cout << maxi << endl;
    }
}
