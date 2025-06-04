#include <iostream>
using namespace std;

// https://codeforces.com/problemset/problem/1857/A
// Done on 4 June 2025

// If we have different parity (odd and even) then there sum will always result in an odd number. Similarly if we have same parity (even and even or odd and odd), then there sum will result in even. 
// Therefore, simply check the total sum of the array. If the sum is odd, then it can be split into odd and even (different parity), else it must have two same parities.

int main() {
    int testCases;
    cin >> testCases;

    for (int t = 1; t <= testCases; t++) {
        int n;
        cin >> n;

        int sum = 0;

        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            sum += temp;
        }

        if (sum & 1) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}
