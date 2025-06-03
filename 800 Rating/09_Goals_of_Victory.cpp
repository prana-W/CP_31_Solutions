#include <iostream>
using namespace std;

// https://codeforces.com/problemset/problem/1877/A
// Done on 27 May 2025

// We take an example of three teams and pair up each of them and assign them any goals in each match. We find that after summing up all the efficiency in last, we get zero. So our answer would be simply (Required = 0-sum_of_remaining)

int main() {
    int testCases;
    cin >> testCases;

    for (int t = 1; t <= testCases; t++) {
        int n;
        cin >> n;


        int sum = 0;
        for (int i = 0; i < n - 1; i++) {
            int temp;
            cin >> temp;

            sum += temp;
        }

        cout << -1 * sum << endl;
    }
}
