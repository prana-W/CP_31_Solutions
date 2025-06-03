#include <iostream>
#include <vector>
using namespace std;

// https://codeforces.com/problemset/problem/1878/A
// Done on 27 May 2025

// We will take the length of sub-segment to be one in each and only contain the element 'k' in it. This way, it will be the majority element in the sub-segment. Therefore we simply need to find if the element (k) occurs in the array or not.

int main() {
    int testCases;
    cin >> testCases;

    for (int t = 1; t <= testCases; t++) {
        int n, k;
        cin >> n >> k;

        vector<int>arr;

        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;

            arr.push_back (temp);
        }

        bool ans = false;

        for (int i = 0; i < n ;i++) {
            if (arr[i] == k) {
                ans = true;
                break;
            }
        }

        ans ? cout << "Yes" << endl : cout << "No" << endl;

    }
}