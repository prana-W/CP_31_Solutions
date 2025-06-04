#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

// https://codeforces.com/problemset/problem/1853/A
// Done on 4 June 2025

// Iterate the whole array and find the minimum difference (call mini) between the adjacent elements
// If mini is negative, it means array is not sorted, hencce return 0
// If mini is non-positive, it means array is either sorted or equal. In either case the answer will be mini/2 + 1. Since we want to do the operation till, the mini becomes negative!! To make mini negative, we need to do the operation mini/2 + 1 times.

int main() {
    int testCases;
    cin >> testCases;

    for (int t = 1; t <= testCases; t++) {
        int n;
        cin >> n;

        vector<long long int> arr;

        for (int i = 0; i < n; i++) {
            long long int temp;
            cin >> temp;

            arr.push_back(temp);
        }

        long long int mini = LONG_LONG_MAX;

        for (int i = 0; i < n - 1; i++) {
            if (arr[i + 1] - arr[i] < mini) {
                mini = arr[i + 1] - arr[i];
            }
        }

        if (mini < 0) {
            cout << 0 << endl;
        } else {
            cout << mini / 2 + 1 << endl;
        }
    }
}
